// -*- mode: c++ -*-
// Copyright 2016-2022 Keyboardio, inc. <jesse@keyboard.io>
// See "LICENSE" for license details

/**
 * These #include directives pull in the Kaleidoscope firmware core,
 * as well as the Kaleidoscope plugins we use in the Model 100's firmware
 */

// The Kaleidoscope core
#include "Kaleidoscope.h"

// Support for controlling the keyboard's LEDs
#include "Kaleidoscope-LEDControl.h"

// Support for the "Boot greeting" effect, which pulses the 'LED' button for 10s
// when the keyboard is connected to a computer (or that computer is powered on)
#include "Kaleidoscope-LEDEffect-BootGreeting.h"

// Support for LED modes that set all LEDs to a single color
#include "Kaleidoscope-LEDEffect-SolidColor.h"

// Support for turning the LEDs off after a certain amount of time
#include "Kaleidoscope-IdleLEDs.h"

// Support for Keyboardio's internal keyboard testing mode
#include "Kaleidoscope-HardwareTestMode.h"

// Support for host power management (suspend & wakeup)
#include "Kaleidoscope-HostPowerManagement.h"

// Support for magic combos (key chords that trigger an action)
#include "Kaleidoscope-MagicCombo.h"

// Support for USB quirks, like changing the key state report protocol
#include "Kaleidoscope-USB-Quirks.h"

// Support for secondary actions on keys
#include "Kaleidoscope-Qukeys.h"

// Support for one-shot modifiers and layer keys
#include "Kaleidoscope-OneShot.h"
#include "Kaleidoscope-Escape-OneShot.h"

// Support for key inversion to flip keys
#include "Kaleidoscope-TopsyTurvy.h"

// Support for multiple keys via multitap
#include "Kaleidoscope-TapDance.h"

// Support for highlighting modifier keys when active
#include "Kaleidoscope-LED-ActiveModColor.h"

enum {
    TDLBR,                      // left paren → bracket → brace
    TDRBR                       // right paren → bracket → brace
};

/** The Model 100's key layouts are defined as 'keymaps'. By default, there are three
  * keymaps: The standard QWERTY keymap, the "Function layer" keymap and the "Numpad"
  * keymap.
  *
  * Each keymap is defined as a list using the 'KEYMAP_STACKED' macro, built
  * of first the left hand's layout, followed by the right hand's layout.
  *
  * Keymaps typically consist mostly of `Key_` definitions. There are many, many keys
  * defined as part of the USB HID Keyboard specification. You can find the names
  * (if not yet the explanations) for all the standard `Key_` defintions offered by
  * Kaleidoscope in these files:
  *    https://github.com/keyboardio/Kaleidoscope/blob/master/src/kaleidoscope/key_defs/keyboard.h
  *    https://github.com/keyboardio/Kaleidoscope/blob/master/src/kaleidoscope/key_defs/consumerctl.h
  *    https://github.com/keyboardio/Kaleidoscope/blob/master/src/kaleidoscope/key_defs/sysctl.h
  *    https://github.com/keyboardio/Kaleidoscope/blob/master/src/kaleidoscope/key_defs/keymaps.h
  *
  * Additional things that should be documented here include
  *   using ___ to let keypresses fall through to the previously active layer
  *   using XXX to mark a keyswitch as 'blocked' on this layer
  *   using ShiftToLayer() and LockLayer() keys to change the active keymap.
  *   keeping NUM and FN consistent and accessible on all layers
  *
  * The PROG key is special, since it is how you indicate to the board that you
  * want to flash the firmware. However, it can be remapped to a regular key.
  * When the keyboard boots, it first looks to see whether the PROG key is held
  * down; if it is, it simply awaits further flashing instructions. If it is
  * not, it continues loading the rest of the firmware and the keyboard
  * functions normally, with whatever binding you have set to PROG. More detail
  * here: https://community.keyboard.io/t/how-the-prog-key-gets-you-into-the-bootloader/506/8
  *
  * The "keymaps" data structure is a list of the keymaps compiled into the firmware.
  * The order of keymaps in the list is important, as the ShiftToLayer(#) and LockLayer(#)
  * macros switch to key layers based on this list.
  *
  *

  * A key defined as 'ShiftToLayer(FUNCTION)' will switch to FUNCTION while held.
  * Similarly, a key defined as 'LockLayer(NUMPAD)' will switch to NUMPAD when tapped.
  */

/**
 * Layers are "0-indexed" -- That is the first one is layer 0. The second one is layer 1.
 * The third one is layer 2.
 * This 'enum' lets us use names like QWERTY, FUNCTION, and NUMPAD in place of
 * the numbers 0, 1 and 2.
 *
 */

enum {
  PRIMARY,
  FUNCTION,
};  // layers


/**
  * To change your keyboard's layout from QWERTY to DVORAK or COLEMAK, comment out the line
  *
  * #define PRIMARY_KEYMAP_QWERTY
  *
  * by changing it to
  *
  * // #define PRIMARY_KEYMAP_QWERTY
  *
  * Then uncomment the line corresponding to the layout you want to use.
  *
  */

// #define PRIMARY_KEYMAP_QWERTY
// #define PRIMARY_KEYMAP_DVORAK
// #define PRIMARY_KEYMAP_COLEMAK
#define PRIMARY_KEYMAP_CUSTOM

#define KC_HYP LSHIFT(LALT(LGUI(Key_LeftControl))) // "hyper"
#define KC_MEH LSHIFT(LALT(Key_LeftGui))           // "meh"

/* This comment temporarily turns off astyle's indent enforcement
 *   so we can make the keymaps actually resemble the physical key layout better
 */
// clang-format off

KEYMAPS(

#if defined (PRIMARY_KEYMAP_QWERTY)

  [PRIMARY] = KEYMAP_STACKED
  (___,          Key_1, Key_2, Key_3, Key_4, Key_5, Key_LEDEffectNext,
   Key_Backtick, Key_Q, Key_W, Key_E, Key_R, Key_T, Key_Tab,
   Key_PageUp,   Key_A, Key_S, Key_D, Key_F, Key_G,
   Key_PageDown, Key_Z, Key_X, Key_C, Key_V, Key_B, Key_Escape,
   Key_LeftControl, Key_Backspace, Key_LeftGui, Key_LeftShift,
   ShiftToLayer(FUNCTION),

   M(MACRO_ANY),  Key_6, Key_7, Key_8,     Key_9,         Key_0,         LockLayer(NUMPAD),
   Key_Enter,     Key_Y, Key_U, Key_I,     Key_O,         Key_P,         Key_Equals,
                  Key_H, Key_J, Key_K,     Key_L,         Key_Semicolon, Key_Quote,
   Key_RightAlt,  Key_N, Key_M, Key_Comma, Key_Period,    Key_Slash,     Key_Minus,
   Key_RightShift, Key_LeftAlt, Key_Spacebar, Key_RightControl,
   ShiftToLayer(FUNCTION)),

#elif defined (PRIMARY_KEYMAP_DVORAK)

  [PRIMARY] = KEYMAP_STACKED
  (___,          Key_1,         Key_2,     Key_3,      Key_4, Key_5, Key_LEDEffectNext,
   Key_Backtick, Key_Quote,     Key_Comma, Key_Period, Key_P, Key_Y, Key_Tab,
   Key_PageUp,   Key_A,         Key_O,     Key_E,      Key_U, Key_I,
   Key_PageDown, Key_Semicolon, Key_Q,     Key_J,      Key_K, Key_X, Key_Escape,
   Key_LeftControl, Key_Backspace, Key_LeftGui, Key_LeftShift,
   ShiftToLayer(FUNCTION),

   M(MACRO_ANY),   Key_6, Key_7, Key_8, Key_9, Key_0, LockLayer(NUMPAD),
   Key_Enter,      Key_F, Key_G, Key_C, Key_R, Key_L, Key_Slash,
                   Key_D, Key_H, Key_T, Key_N, Key_S, Key_Minus,
   Key_RightAlt,   Key_B, Key_M, Key_W, Key_V, Key_Z, Key_Equals,
   Key_RightShift, Key_LeftAlt, Key_Spacebar, Key_RightControl,
   ShiftToLayer(FUNCTION)),

#elif defined (PRIMARY_KEYMAP_COLEMAK)

  [PRIMARY] = KEYMAP_STACKED
  (___,          Key_1, Key_2, Key_3, Key_4, Key_5, Key_LEDEffectNext,
   Key_Backtick, Key_Q, Key_W, Key_F, Key_P, Key_B, Key_Tab,
   Key_PageUp,   Key_A, Key_R, Key_S, Key_T, Key_G,
   Key_PageDown, Key_Z, Key_X, Key_C, Key_D, Key_V, Key_Escape,
   Key_LeftControl, Key_Backspace, Key_LeftGui, Key_LeftShift,
   ShiftToLayer(FUNCTION),

   M(MACRO_ANY),  Key_6, Key_7, Key_8,     Key_9,         Key_0,         LockLayer(NUMPAD),
   Key_Enter,     Key_J, Key_L, Key_U,     Key_Y,         Key_Semicolon, Key_Equals,
                  Key_M, Key_N, Key_E,     Key_I,         Key_O,         Key_Quote,
   Key_RightAlt,  Key_K, Key_H, Key_Comma, Key_Period,    Key_Slash,     Key_Minus,
   Key_RightShift, Key_LeftAlt, Key_Spacebar, Key_RightControl,
   ShiftToLayer(FUNCTION)),

#elif defined (PRIMARY_KEYMAP_CUSTOM)

    [PRIMARY] = KEYMAP_STACKED
    (
        //
        // left hand
        //

        // ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┐
        // │  ESC  │   1   │   2   │   3   │   4   │   5   │       │
        // ├───────┼───────┼───────┼───────┼───────┼───────┤  MEH  │
        // │   `   │   Q   │   W   │   E   │   R   │   T   ├───────┤
        // ├───────┼───────┼───────┼───────┼───────┼───────┤       │
        // │   ^   │   A   │   S   │   D   │   F   │   G   │   ⇥   │
        // ├───────┼───────┼───────┼───────┼───────┼───────┼───────┤
        // │   ↑   │   Z   │   X   │   C   │   V   │   B   │ (→[→{ │
        // └───────┴───────┴───────┴───────┴─────┬─┴─────┬─┴─────┬─┴─────┬───────┐
        //                                       │  ^/_  │   ⌥   │   ⌘   │   ↑   │
        //                                       └───────┴───────┴───────┴───────┘
        //                                                   ┌───────┐
        //                                                   │  FUN  │
        //                                                   └───────┘

        Key_Escape,      Key_1, Key_2, Key_3, Key_4, Key_5, KC_MEH,
        Key_Backtick,    Key_Q, Key_W, Key_E, Key_R, Key_T, Key_Tab,
        Key_LeftControl, Key_A, Key_S, Key_D, Key_F, Key_G,
        Key_LeftShift,   Key_Z, Key_X, Key_C, Key_V, Key_B, Key_LeftBracket,

        CTL_T(Spacebar), OSM(LeftAlt), OSM(LeftGui), OSM(LeftShift),

        ShiftToLayer(FUNCTION),

        //
        // right hand
        //

        //               ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┐
        //               │       │   6   │   7   │   8   │   9   │   0   │  BSP  │
        //               │  HYP  ├───────┼───────┼───────┼───────┼───────┼───────┤
        //               ├───────┤   Y   │   U   │   I   │   O   │   P   │   =   │
        //               │       ├───────┼───────┼───────┼───────┼───────┼───────┤
        //               │   ↩   │   H   │   J   │   K   │   L   │   ;   │   '   │
        //               ├───────┼───────┼───────┼───────┼───────┼───────┼───────┤
        //               │ )→]→} │   N   │   M   │   ,   │   .   │   /   │   -   │
        // ┌───────┬─────┴─┬─────┴─┬─────┴─┬─────┴───────┴───────┴───────┴───────┘
        // │   ⌥   │   ⌘   │   \   │   _   │
        // └───────┴───────┴───────┴───────┘
        //             ┌───────┐
        //             │  FUN  │
        //             └───────┘

        KC_HYP,    Key_6, Key_7, Key_8,     Key_9,      Key_0,         Key_Backspace,
        Key_Enter, Key_Y, Key_U, Key_I,     Key_O,      Key_P,         Key_Equals,
                   Key_H, Key_J, Key_K,     Key_L,      Key_Semicolon, Key_Quote,
 Key_RightBracket, Key_N, Key_M, Key_Comma, Key_Period, Key_Slash,     Key_Minus,

        OSM(RightAlt), OSM(RightGui), Key_Backslash, Key_Spacebar,

        ShiftToLayer(FUNCTION)
    ),

#else

#error "No default keymap defined. You should make sure that you have a line like '#define PRIMARY_KEYMAP_QWERTY' in your sketch"

#endif

    [FUNCTION] =  KEYMAP_STACKED
    (
        //
        // left hand
        //
        ___,               Key_F1,   Key_F2,                Key_F3,                Key_F4,                    Key_F5, Key_LEDEffectNext,
        Key_Tab,           ___,      ___,                   LSHIFT(Key_UpArrow),   ___,                       ___,    ___,
        Key_PageUp,        Key_Home, LSHIFT(Key_LeftArrow), LSHIFT(Key_DownArrow), LSHIFT(Key_RightArrow),    ___,
        Key_PageDown,      Key_End,  Key_Insert,            ___,                   ___,                       ___,    Key_PrintScreen,

        ___, ___, ___, ___,

        ___,

        //
        // right hand
        //
        Consumer_Mute,            Key_F6,            Key_F7,                     Key_F8,                  Key_F9,                 Key_F10, Key_Backspace,
        Consumer_VolumeIncrement, XXX,               Key_PageUp,                 Key_UpArrow,             Key_PageDown,           Key_F14, Key_F11,
                                  XXX,               Key_LeftArrow,              Key_DownArrow,           Key_RightArrow,         Key_F15, Key_F12,
        Consumer_VolumeDecrement, Key_PcApplication, Consumer_ScanPreviousTrack, Consumer_PlaySlashPause, Consumer_ScanNextTrack, Key_F16, Key_F13,

        ___, ___, Key_Enter, ___,

        ___
    )
)

/* Re-enable astyle's indent enforcement */
// clang-format on

void tapDanceAction(uint8_t tap_dance_index, byte row, byte col, uint8_t tap_count,
                    kaleidoscope::plugin::TapDance::ActionType tap_dance_action)
{
    switch (tap_dance_index)
    {
        case TDLBR:
            return tapDanceActionKeys(tap_count, tap_dance_action,
                                      TOPSY(9), Key_LeftBracket, Key_LeftCurlyBracket);
            break;
        case TDRBR:
            return tapDanceActionKeys(tap_count, tap_dance_action,
                                      TOPSY(0), Key_RightBracket, Key_RightCurlyBracket);
            break;
    }
}

// These 'solid' color effect definitions define a rainbow of
// LED color modes calibrated to draw 500mA or less on the
// Keyboardio Model 100.

static kaleidoscope::plugin::LEDSolidColor rnpGreen(0, 100, 0);
static kaleidoscope::plugin::LEDSolidColor rnpOrange(128, 64, 32);
static kaleidoscope::plugin::LEDSolidColor rnpBlue(27, 101, 144);

/** toggleLedsOnSuspendResume toggles the LEDs off when the host goes to sleep,
 * and turns them back on when it wakes up.
 */
void toggleLedsOnSuspendResume(kaleidoscope::plugin::HostPowerManagement::Event event) {
  switch (event) {
  case kaleidoscope::plugin::HostPowerManagement::Suspend:
    LEDControl.disable();
    break;
  case kaleidoscope::plugin::HostPowerManagement::Resume:
    LEDControl.enable();
    break;
  case kaleidoscope::plugin::HostPowerManagement::Sleep:
    break;
  }
}

/** hostPowerManagementEventHandler dispatches power management events (suspend,
 * resume, and sleep) to other functions that perform action based on these
 * events.
 */
void hostPowerManagementEventHandler(kaleidoscope::plugin::HostPowerManagement::Event event) {
  toggleLedsOnSuspendResume(event);
}

/** This 'enum' is a list of all the magic combos used by the Model 100's
 * firmware The names aren't particularly important. What is important is that
 * each is unique.
 *
 * These are the names of your magic combos. They will be used by the
 * `USE_MAGIC_COMBOS` call below.
 */
enum {
  // Toggle between Boot (6-key rollover; for BIOSes and early boot) and NKRO
  // mode.
  COMBO_TOGGLE_NKRO_MODE,
  // Enter test mode
  COMBO_ENTER_TEST_MODE
};

/** Wrappers, to be used by MagicCombo. **/

/**
 * This simply toggles the keyboard protocol via USBQuirks, and wraps it within
 * a function with an unused argument, to match what MagicCombo expects.
 */
static void toggleKeyboardProtocol(uint8_t combo_index) {
    USBQuirks.toggleKeyboardProtocol();
}


/**
 *  This enters the hardware test mode
 */
static void enterHardwareTestMode(uint8_t combo_index) {
  HardwareTestMode.runTests();
}


/** Magic combo list, a list of key combo and action pairs the firmware should
 * recognise.
 */
USE_MAGIC_COMBOS(
    {.action = toggleKeyboardProtocol,
        // Left Fn + Esc + Shift
        .keys = {R3C6, R2C6, R3C7}},
    {.action = enterHardwareTestMode,
     // Left Fn + Prog + LED
     .keys = {R3C6, R0C0, R0C6}});

// First, tell Kaleidoscope which plugins you want to use.
// The order can be important. For example, LED effects are
// added in the order they're listed here.
KALEIDOSCOPE_INIT_PLUGINS(
    // The boot greeting effect pulses the LED button for 10 seconds after the
    // keyboard is first connected
    BootGreetingEffect,

    // The hardware test mode, which can be invoked by tapping Prog, LED and the
    // left Fn button at the same time.
    HardwareTestMode,

    // LEDControl provides support for other LED modes
    LEDControl,

    // The HostPowerManagement plugin allows us to turn LEDs off when then host
    // goes to sleep, and resume them when it wakes up.
    HostPowerManagement,

    // The Qukeys plugin enables the "Secondary action" functionality in
    // Chrysalis. Keys with secondary actions will have their primary action
    // performed when tapped, but the secondary action when held.
    Qukeys,

    // Enables the "Sticky" behavior for modifiers, and the "Layer shift when
    // held" functionality for layer keys.
    OneShot,
    EscapeOneShot,
    EscapeOneShotConfig,

    // enable flipped keys
    TopsyTurvy,

    // enable multiple keybindings per key, based on number of taps
    TapDance,

    // The MagicCombo plugin lets you use key combinations to trigger custom
    // actions - a bit like Macros, but triggered by pressing multiple keys at the
    // same time.
    MagicCombo,

    // The USBQuirks plugin lets you do some things with USB that we aren't
    // comfortable - or able - to do automatically, but can be useful
    // nevertheless. Such as toggling the key report protocol between Boot (used
    // by BIOSes) and Report (NKRO).
    USBQuirks,

    // Turns LEDs off after a configurable amount of idle time.
    IdleLEDs,
    PersistentIdleLEDs,

    // We start with the LED effect that turns off all the LEDs.
    LEDOff,

    rnpBlue,
    rnpOrange,
    rnpGreen,


    // ActiveModColor lights up the mod keys when they're active
    ActiveModColorEffect);

/** The 'setup' function is one of the two standard Arduino sketch functions.
 * It's called when your keyboard first powers up. This is where you set up
 * Kaleidoscope and any plugins.
 */
void setup() {

    // First, call Kaleidoscope's internal setup function
    Kaleidoscope.setup();

    // Set the hue of the boot greeting effect to something that will result in a
    // nice green color.
    BootGreetingEffect.hue = 85;

    // Set the action key the test mode should listen for to Left Fn
    HardwareTestMode.setActionKey(R3C6);

    ActiveModColorEffect.setHighlightColor(CRGB(0xd0, 0xd0, 0xd0));
    ActiveModColorEffect.setOneShotColor(CRGB(0xd0, 0x69, 0x34));
    ActiveModColorEffect.setStickyColor(CRGB(0xab, 0x34, 0xd0));

}

/** loop is the second of the standard Arduino sketch functions.
 * As you might expect, it runs in a loop, never exiting.
 *
 * For Kaleidoscope-based keyboard firmware, you usually just want to
 * call Kaleidoscope.loop(); and not do anything custom here.
 */

void loop() {
    Kaleidoscope.loop();
}
