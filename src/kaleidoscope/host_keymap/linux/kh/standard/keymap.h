/* Kaleidoscope - Firmware for computer input devices
 * Copyright (C) 2013-2019  Keyboard.io, Inc.
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "kaleidoscope/host_keymap/linux.h"

// This file was autogenerated by host_keymap.
// Its content is based on information provided by the XKB X11 system
// collected with the extraordinary libxkbcommon.

// layout: kh
// variant: standard

#define _HOST_KEYMAP_ASCII(OP) \
   OP('\b', Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP('\t', Key_Tab) /* XKB_KEY_Tab */ \
   OP('\r', Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP('\e', Key_Escape) /* XKB_KEY_Escape */ \
   OP(' ', LSHIFT(Key_Spacebar)) /* U+0020, XKB_KEY_space, SPACE */ \
   OP('!', LSHIFT(Key_1)) /* U+0021, XKB_KEY_exclam, EXCLAMATION MARK */ \
   OP('"', LSHIFT(Key_3)) /* U+0022, XKB_KEY_quotedbl, QUOTATION MARK */ \
   OP('$', RALT(Key_4)) /* U+0024, XKB_KEY_dollar, DOLLAR SIGN */ \
   OP('%', LSHIFT(Key_5)) /* U+0025, XKB_KEY_percent, PERCENT SIGN */ \
   OP('(', LSHIFT(Key_9)) /* U+0028, XKB_KEY_parenleft, LEFT PARENTHESIS */ \
   OP(')', LSHIFT(Key_0)) /* U+0029, XKB_KEY_parenright, RIGHT PARENTHESIS */ \
   OP('*', Key_KeypadMultiply) /* XKB_KEY_KP_Multiply */ \
   OP('+', Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP(',', RALT(Key_Comma)) /* U+002c, XKB_KEY_comma, COMMA */ \
   OP('-', Key_KeypadSubtract) /* XKB_KEY_KP_Subtract */ \
   OP('.', RALT(Key_Period)) /* U+002e, XKB_KEY_period, FULL STOP */ \
   OP('/', Key_KeypadDivide) /* XKB_KEY_KP_Divide */ \
   OP('0', LSHIFT(Key_Keypad0)) /* XKB_KEY_KP_0 */ \
   OP('1', LSHIFT(Key_Keypad1)) /* XKB_KEY_KP_1 */ \
   OP('2', LSHIFT(Key_Keypad2)) /* XKB_KEY_KP_2 */ \
   OP('3', LSHIFT(Key_Keypad3)) /* XKB_KEY_KP_3 */ \
   OP('4', LSHIFT(Key_Keypad4)) /* XKB_KEY_KP_4 */ \
   OP('5', LSHIFT(Key_Keypad5)) /* XKB_KEY_KP_5 */ \
   OP('6', LSHIFT(Key_Keypad6)) /* XKB_KEY_KP_6 */ \
   OP('7', LSHIFT(Key_Keypad7)) /* XKB_KEY_KP_7 */ \
   OP('8', LSHIFT(Key_Keypad8)) /* XKB_KEY_KP_8 */ \
   OP('9', LSHIFT(Key_Keypad9)) /* XKB_KEY_KP_9 */ \
   OP('<', Key_NonUsBackslashAndPipe) /* U+003c, XKB_KEY_less, LESS-THAN SIGN */ \
   OP('=', LSHIFT(Key_Equals)) /* U+003d, XKB_KEY_equal, EQUALS SIGN */ \
   OP('>', LSHIFT(Key_NonUsBackslashAndPipe)) /* U+003e, XKB_KEY_greater, GREATER-THAN SIGN */ \
   OP('?', LSHIFT(Key_Slash)) /* U+003f, XKB_KEY_question, QUESTION MARK */ \
   OP('@', RALT(Key_2)) /* U+0040, XKB_KEY_at, COMMERCIAL AT */ \
   OP('\\', RALT(Key_NonUsPound)) /* U+005c, XKB_KEY_backslash, REVERSE SOLIDUS */ \
   OP('x', RALT(Key_Minus)) /* U+0078, XKB_KEY_x, LATIN SMALL LETTER X */ \
   OP('{', RALT(Key_9)) /* U+007b, XKB_KEY_braceleft, LEFT CURLY BRACKET */ \
   OP('|', RALT(Key_NonUsBackslashAndPipe)) /* U+007c, XKB_KEY_bar, VERTICAL LINE */ \
   OP('}', RALT(Key_0)) /* U+007d, XKB_KEY_braceright, RIGHT CURLY BRACKET */ \
   OP('', Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \

#define _HOST_KEYMAP_UNICODE(OP) \
   OP(L'\b', Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP(L'\t', Key_Tab) /* XKB_KEY_Tab */ \
   OP(L'\r', Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP(L'\e', Key_Escape) /* XKB_KEY_Escape */ \
   OP(L' ', LSHIFT(Key_Spacebar)) /* U+0020, XKB_KEY_space, SPACE */ \
   OP(L'!', LSHIFT(Key_1)) /* U+0021, XKB_KEY_exclam, EXCLAMATION MARK */ \
   OP(L'"', LSHIFT(Key_3)) /* U+0022, XKB_KEY_quotedbl, QUOTATION MARK */ \
   OP(L'$', RALT(Key_4)) /* U+0024, XKB_KEY_dollar, DOLLAR SIGN */ \
   OP(L'%', LSHIFT(Key_5)) /* U+0025, XKB_KEY_percent, PERCENT SIGN */ \
   OP(L'(', LSHIFT(Key_9)) /* U+0028, XKB_KEY_parenleft, LEFT PARENTHESIS */ \
   OP(L')', LSHIFT(Key_0)) /* U+0029, XKB_KEY_parenright, RIGHT PARENTHESIS */ \
   OP(L'*', Key_KeypadMultiply) /* XKB_KEY_KP_Multiply */ \
   OP(L'+', Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP(L',', RALT(Key_Comma)) /* U+002c, XKB_KEY_comma, COMMA */ \
   OP(L'-', Key_KeypadSubtract) /* XKB_KEY_KP_Subtract */ \
   OP(L'.', RALT(Key_Period)) /* U+002e, XKB_KEY_period, FULL STOP */ \
   OP(L'/', Key_KeypadDivide) /* XKB_KEY_KP_Divide */ \
   OP(L'0', LSHIFT(Key_Keypad0)) /* XKB_KEY_KP_0 */ \
   OP(L'1', LSHIFT(Key_Keypad1)) /* XKB_KEY_KP_1 */ \
   OP(L'2', LSHIFT(Key_Keypad2)) /* XKB_KEY_KP_2 */ \
   OP(L'3', LSHIFT(Key_Keypad3)) /* XKB_KEY_KP_3 */ \
   OP(L'4', LSHIFT(Key_Keypad4)) /* XKB_KEY_KP_4 */ \
   OP(L'5', LSHIFT(Key_Keypad5)) /* XKB_KEY_KP_5 */ \
   OP(L'6', LSHIFT(Key_Keypad6)) /* XKB_KEY_KP_6 */ \
   OP(L'7', LSHIFT(Key_Keypad7)) /* XKB_KEY_KP_7 */ \
   OP(L'8', LSHIFT(Key_Keypad8)) /* XKB_KEY_KP_8 */ \
   OP(L'9', LSHIFT(Key_Keypad9)) /* XKB_KEY_KP_9 */ \
   OP(L'<', Key_NonUsBackslashAndPipe) /* U+003c, XKB_KEY_less, LESS-THAN SIGN */ \
   OP(L'=', LSHIFT(Key_Equals)) /* U+003d, XKB_KEY_equal, EQUALS SIGN */ \
   OP(L'>', LSHIFT(Key_NonUsBackslashAndPipe)) /* U+003e, XKB_KEY_greater, GREATER-THAN SIGN */ \
   OP(L'?', LSHIFT(Key_Slash)) /* U+003f, XKB_KEY_question, QUESTION MARK */ \
   OP(L'@', RALT(Key_2)) /* U+0040, XKB_KEY_at, COMMERCIAL AT */ \
   OP(L'\\', RALT(Key_NonUsPound)) /* U+005c, XKB_KEY_backslash, REVERSE SOLIDUS */ \
   OP(L'x', RALT(Key_Minus)) /* U+0078, XKB_KEY_x, LATIN SMALL LETTER X */ \
   OP(L'{', RALT(Key_9)) /* U+007b, XKB_KEY_braceleft, LEFT CURLY BRACKET */ \
   OP(L'|', RALT(Key_NonUsBackslashAndPipe)) /* U+007c, XKB_KEY_bar, VERTICAL LINE */ \
   OP(L'}', RALT(Key_0)) /* U+007d, XKB_KEY_braceright, RIGHT CURLY BRACKET */ \
   OP(L'', Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \
   OP(L' ', RALT(Key_Spacebar)) \
   OP(L'¦', RALT(LSHIFT(Key_NonUsBackslashAndPipe))) /* U+00a6, XKB_KEY_brokenbar, BROKEN BAR */ \
   OP(L'«', Key_Backtick) /* U+00ab, XKB_KEY_guillemotleft, LEFT-POINTING DOUBLE ANGLE QUOTATION MARK */ \
   OP(L'»', LSHIFT(Key_Backtick)) /* U+00bb, XKB_KEY_guillemotright, RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK */ \
   OP(L'ក', Key_K) \
   OP(L'ខ', Key_X) \
   OP(L'គ', LSHIFT(Key_K)) \
   OP(L'ឃ', LSHIFT(Key_X)) \
   OP(L'ង', Key_G) \
   OP(L'ច', Key_C) \
   OP(L'ឆ', Key_Q) \
   OP(L'ជ', LSHIFT(Key_C)) \
   OP(L'ឈ', LSHIFT(Key_Q)) \
   OP(L'ញ', LSHIFT(Key_J)) \
   OP(L'ដ', Key_D) \
   OP(L'ឋ', Key_Z) \
   OP(L'ឌ', LSHIFT(Key_D)) \
   OP(L'ឍ', LSHIFT(Key_Z)) \
   OP(L'ណ', LSHIFT(Key_N)) \
   OP(L'ត', Key_T) \
   OP(L'ថ', Key_F) \
   OP(L'ទ', LSHIFT(Key_T)) \
   OP(L'ធ', LSHIFT(Key_F)) \
   OP(L'ន', Key_N) \
   OP(L'ប', Key_B) \
   OP(L'ផ', Key_P) \
   OP(L'ព', LSHIFT(Key_B)) \
   OP(L'ភ', LSHIFT(Key_P)) \
   OP(L'ម', Key_M) \
   OP(L'យ', Key_Y) \
   OP(L'រ', Key_R) \
   OP(L'ល', Key_L) \
   OP(L'វ', Key_V) \
   OP(L'ឝ', RALT(Key_K)) \
   OP(L'ឞ', RALT(Key_B)) \
   OP(L'ស', Key_S) \
   OP(L'ហ', Key_H) \
   OP(L'ឡ', LSHIFT(Key_L)) \
   OP(L'អ', LSHIFT(Key_G)) \
   OP(L'ឥ', Key_Minus) \
   OP(L'ឦ', RALT(Key_I)) \
   OP(L'ឧ', LSHIFT(Key_RightBracket)) \
   OP(L'ឨ', RALT(Key_T)) \
   OP(L'ឩ', RALT(Key_LeftBracket)) \
   OP(L'ឪ', Key_RightBracket) \
   OP(L'ឫ', RALT(Key_R)) \
   OP(L'ឬ', LSHIFT(Key_R)) \
   OP(L'ឭ', LSHIFT(Key_NonUsPound)) \
   OP(L'ឮ', Key_NonUsPound) \
   OP(L'ឯ', RALT(Key_E)) \
   OP(L'ឰ', RALT(Key_P)) \
   OP(L'ឱ', RALT(Key_O)) \
   OP(L'ឲ', Key_Equals) \
   OP(L'ឳ', RALT(Key_RightBracket)) \
   OP(L'ា', Key_A) \
   OP(L'ិ', Key_I) \
   OP(L'ី', LSHIFT(Key_I)) \
   OP(L'ឹ', Key_W) \
   OP(L'ឺ', LSHIFT(Key_W)) \
   OP(L'ុ', Key_U) \
   OP(L'ូ', LSHIFT(Key_U)) \
   OP(L'ួ', LSHIFT(Key_Y)) \
   OP(L'ើ', Key_Semicolon) \
   OP(L'ឿ', LSHIFT(Key_LeftBracket)) \
   OP(L'ៀ', Key_LeftBracket) \
   OP(L'េ', Key_E) \
   OP(L'ែ', LSHIFT(Key_E)) \
   OP(L'ៃ', LSHIFT(Key_S)) \
   OP(L'ោ', Key_O) \
   OP(L'ៅ', LSHIFT(Key_O)) \
   OP(L'ំ', LSHIFT(Key_M)) \
   OP(L'ះ', LSHIFT(Key_H)) \
   OP(L'ៈ', RALT(Key_Quote)) \
   OP(L'៉', LSHIFT(Key_Quote)) \
   OP(L'៊', Key_Slash) \
   OP(L'់', Key_Quote) \
   OP(L'៌', LSHIFT(Key_Minus)) \
   OP(L'៍', LSHIFT(Key_6)) \
   OP(L'៎', RALT(Key_Equals)) \
   OP(L'៏', LSHIFT(Key_8)) \
   OP(L'័', LSHIFT(Key_7)) \
   OP(L'៑', RALT(Key_3)) \
   OP(L'្', Key_J) \
   OP(L'។', Key_Period) \
   OP(L'៕', LSHIFT(Key_Period)) \
   OP(L'៖', RALT(Key_Semicolon)) \
   OP(L'ៗ', LSHIFT(Key_2)) \
   OP(L'៙', RALT(Key_6)) \
   OP(L'៚', RALT(Key_7)) \
   OP(L'៛', LSHIFT(Key_4)) \
   OP(L'ៜ', RALT(Key_Q)) \
   OP(L'៝', RALT(Key_W)) \
   OP(L'០', Key_0) \
   OP(L'១', Key_1) \
   OP(L'២', Key_2) \
   OP(L'៣', Key_3) \
   OP(L'៤', Key_4) \
   OP(L'៥', Key_5) \
   OP(L'៦', Key_6) \
   OP(L'៧', Key_7) \
   OP(L'៨', Key_8) \
   OP(L'៩', Key_9) \
   OP(L'៰', RALT(LSHIFT(Key_0))) \
   OP(L'៱', RALT(LSHIFT(Key_1))) \
   OP(L'៲', RALT(LSHIFT(Key_2))) \
   OP(L'៳', RALT(LSHIFT(Key_3))) \
   OP(L'៴', RALT(LSHIFT(Key_4))) \
   OP(L'៵', RALT(LSHIFT(Key_5))) \
   OP(L'៶', RALT(LSHIFT(Key_6))) \
   OP(L'៷', RALT(LSHIFT(Key_7))) \
   OP(L'៸', RALT(LSHIFT(Key_8))) \
   OP(L'៹', RALT(LSHIFT(Key_9))) \
   OP(L'៻', LSHIFT(Key_Comma)) \
   OP(L'៼', Key_Comma) \
   OP(L'៽', LSHIFT(Key_V)) \
   OP(L'៾', LSHIFT(Key_Semicolon)) \
   OP(L'៿', LSHIFT(Key_A)) \
   OP(L'᧠', RALT(LSHIFT(Key_Q))) \
   OP(L'᧡', RALT(LSHIFT(Key_W))) \
   OP(L'᧢', RALT(LSHIFT(Key_E))) \
   OP(L'᧣', RALT(LSHIFT(Key_R))) \
   OP(L'᧤', RALT(LSHIFT(Key_T))) \
   OP(L'᧥', RALT(LSHIFT(Key_Y))) \
   OP(L'᧦', RALT(LSHIFT(Key_U))) \
   OP(L'᧧', RALT(LSHIFT(Key_I))) \
   OP(L'᧨', RALT(LSHIFT(Key_O))) \
   OP(L'᧩', RALT(LSHIFT(Key_P))) \
   OP(L'᧪', RALT(LSHIFT(Key_LeftBracket))) \
   OP(L'᧫', RALT(LSHIFT(Key_RightBracket))) \
   OP(L'᧬', RALT(LSHIFT(Key_A))) \
   OP(L'᧭', RALT(LSHIFT(Key_S))) \
   OP(L'᧮', RALT(LSHIFT(Key_D))) \
   OP(L'᧯', RALT(LSHIFT(Key_F))) \
   OP(L'᧰', RALT(LSHIFT(Key_G))) \
   OP(L'᧱', RALT(LSHIFT(Key_H))) \
   OP(L'᧲', RALT(LSHIFT(Key_J))) \
   OP(L'᧳', RALT(LSHIFT(Key_K))) \
   OP(L'᧴', RALT(LSHIFT(Key_L))) \
   OP(L'᧵', RALT(LSHIFT(Key_Semicolon))) \
   OP(L'᧶', RALT(LSHIFT(Key_Quote))) \
   OP(L'᧷', RALT(LSHIFT(Key_Z))) \
   OP(L'᧸', RALT(LSHIFT(Key_X))) \
   OP(L'᧹', RALT(LSHIFT(Key_C))) \
   OP(L'᧺', RALT(LSHIFT(Key_V))) \
   OP(L'᧻', RALT(LSHIFT(Key_B))) \
   OP(L'᧼', RALT(LSHIFT(Key_N))) \
   OP(L'᧽', RALT(LSHIFT(Key_M))) \
   OP(L'᧾', RALT(LSHIFT(Key_Comma))) \
   OP(L'᧿', RALT(LSHIFT(Key_Period))) \
   OP(L'​', Key_Spacebar) \
   OP(L'‌', RALT(Key_1)) \
   OP(L'‍', RALT(Key_Backtick)) \
   OP(L'€', RALT(Key_5)) /* U+20ac, XKB_KEY_EuroSign, EURO SIGN */ \

#define _HOST_KEYMAP_NON_PRINTABLE(OP) \
   OP(XKB_KEY_Alt_L, Key_LeftAlt) /* XKB_KEY_Alt_L, Left alt  */ \
   OP(XKB_KEY_BackSpace, Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP(XKB_KEY_Break, LCTRL(Key_Pause)) /* XKB_KEY_Break */ \
   OP(XKB_KEY_Caps_Lock, Key_CapsLock) /* XKB_KEY_Caps_Lock, Caps lock  */ \
   OP(XKB_KEY_Control_L, Key_LeftControl) /* XKB_KEY_Control_L, Left control  */ \
   OP(XKB_KEY_Control_R, Key_RightControl) /* XKB_KEY_Control_R, Right control  */ \
   OP(XKB_KEY_Delete, Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \
   OP(XKB_KEY_Down, Key_DownArrow) /* XKB_KEY_Down, Move down, down arrow  */ \
   OP(XKB_KEY_End, Key_End) /* XKB_KEY_End, EOL  */ \
   OP(XKB_KEY_Escape, Key_Escape) /* XKB_KEY_Escape */ \
   OP(XKB_KEY_EuroSign, RALT(Key_5)) \
   OP(XKB_KEY_F1, Key_F1) /* XKB_KEY_F1 */ \
   OP(XKB_KEY_F10, Key_F10) /* XKB_KEY_F10 */ \
   OP(XKB_KEY_F11, Key_F11) /* XKB_KEY_F11 */ \
   OP(XKB_KEY_F12, Key_F12) /* XKB_KEY_F12 */ \
   OP(XKB_KEY_F2, Key_F2) /* XKB_KEY_F2 */ \
   OP(XKB_KEY_F3, Key_F3) /* XKB_KEY_F3 */ \
   OP(XKB_KEY_F4, Key_F4) /* XKB_KEY_F4 */ \
   OP(XKB_KEY_F5, Key_F5) /* XKB_KEY_F5 */ \
   OP(XKB_KEY_F6, Key_F6) /* XKB_KEY_F6 */ \
   OP(XKB_KEY_F7, Key_F7) /* XKB_KEY_F7 */ \
   OP(XKB_KEY_F8, Key_F8) /* XKB_KEY_F8 */ \
   OP(XKB_KEY_F9, Key_F9) /* XKB_KEY_F9 */ \
   OP(XKB_KEY_Home, Key_Home) /* XKB_KEY_Home */ \
   OP(XKB_KEY_ISO_Left_Tab, LSHIFT(Key_Tab)) /* XKB_KEY_ISO_Left_Tab */ \
   OP(XKB_KEY_ISO_Level3_Shift, Key_RightAlt) /* XKB_KEY_ISO_Level3_Shift */ \
   OP(XKB_KEY_Insert, Key_Insert) /* XKB_KEY_Insert, Insert, insert here  */ \
   OP(XKB_KEY_KP_0, LSHIFT(Key_Keypad0)) /* XKB_KEY_KP_0 */ \
   OP(XKB_KEY_KP_1, LSHIFT(Key_Keypad1)) /* XKB_KEY_KP_1 */ \
   OP(XKB_KEY_KP_2, LSHIFT(Key_Keypad2)) /* XKB_KEY_KP_2 */ \
   OP(XKB_KEY_KP_3, LSHIFT(Key_Keypad3)) /* XKB_KEY_KP_3 */ \
   OP(XKB_KEY_KP_4, LSHIFT(Key_Keypad4)) /* XKB_KEY_KP_4 */ \
   OP(XKB_KEY_KP_5, LSHIFT(Key_Keypad5)) /* XKB_KEY_KP_5 */ \
   OP(XKB_KEY_KP_6, LSHIFT(Key_Keypad6)) /* XKB_KEY_KP_6 */ \
   OP(XKB_KEY_KP_7, LSHIFT(Key_Keypad7)) /* XKB_KEY_KP_7 */ \
   OP(XKB_KEY_KP_8, LSHIFT(Key_Keypad8)) /* XKB_KEY_KP_8 */ \
   OP(XKB_KEY_KP_9, LSHIFT(Key_Keypad9)) /* XKB_KEY_KP_9 */ \
   OP(XKB_KEY_KP_Add, Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP(XKB_KEY_KP_Begin, Key_Keypad5) /* XKB_KEY_KP_Begin */ \
   OP(XKB_KEY_KP_Decimal, LSHIFT(Key_KeypadDot)) /* XKB_KEY_KP_Decimal */ \
   OP(XKB_KEY_KP_Delete, Key_KeypadDot) /* XKB_KEY_KP_Delete */ \
   OP(XKB_KEY_KP_Divide, Key_KeypadDivide) /* XKB_KEY_KP_Divide */ \
   OP(XKB_KEY_KP_Down, Key_Keypad2) /* XKB_KEY_KP_Down */ \
   OP(XKB_KEY_KP_End, Key_Keypad1) /* XKB_KEY_KP_End */ \
   OP(XKB_KEY_KP_Enter, Key_KeypadEnter) /* XKB_KEY_KP_Enter, Enter  */ \
   OP(XKB_KEY_KP_Home, Key_Keypad7) /* XKB_KEY_KP_Home */ \
   OP(XKB_KEY_KP_Insert, Key_Keypad0) /* XKB_KEY_KP_Insert */ \
   OP(XKB_KEY_KP_Left, Key_Keypad4) /* XKB_KEY_KP_Left */ \
   OP(XKB_KEY_KP_Multiply, Key_KeypadMultiply) /* XKB_KEY_KP_Multiply */ \
   OP(XKB_KEY_KP_Next, Key_Keypad3) /* XKB_KEY_KP_Next */ \
   OP(XKB_KEY_KP_Prior, Key_Keypad9) /* XKB_KEY_KP_Prior */ \
   OP(XKB_KEY_KP_Right, Key_Keypad6) /* XKB_KEY_KP_Right */ \
   OP(XKB_KEY_KP_Subtract, Key_KeypadSubtract) /* XKB_KEY_KP_Subtract */ \
   OP(XKB_KEY_KP_Up, Key_Keypad8) /* XKB_KEY_KP_Up */ \
   OP(XKB_KEY_Left, Key_LeftArrow) /* XKB_KEY_Left, Move left, left arrow  */ \
   OP(XKB_KEY_Menu, Key_PcApplication) /* XKB_KEY_Menu */ \
   OP(XKB_KEY_Meta_L, LSHIFT(Key_LeftAlt)) /* XKB_KEY_Meta_L, Left meta  */ \
   OP(XKB_KEY_Next, Key_PageDown) /* XKB_KEY_Next, Next  */ \
   OP(XKB_KEY_Num_Lock, Key_KeypadNumLock) /* XKB_KEY_Num_Lock */ \
   OP(XKB_KEY_Pause, Key_Pause) /* XKB_KEY_Pause, Pause, hold  */ \
   OP(XKB_KEY_Print, Key_PrintScreen) /* XKB_KEY_Print */ \
   OP(XKB_KEY_Prior, Key_PageUp) /* XKB_KEY_Prior, Prior, previous  */ \
   OP(XKB_KEY_Return, Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP(XKB_KEY_Right, Key_RightArrow) /* XKB_KEY_Right, Move right, right arrow  */ \
   OP(XKB_KEY_Scroll_Lock, Key_ScrollLock) /* XKB_KEY_Scroll_Lock */ \
   OP(XKB_KEY_Shift_L, Key_LeftShift) /* XKB_KEY_Shift_L, Left shift  */ \
   OP(XKB_KEY_Shift_R, Key_RightShift) /* XKB_KEY_Shift_R, Right shift  */ \
   OP(XKB_KEY_Super_L, Key_LeftGui) /* XKB_KEY_Super_L, Left super  */ \
   OP(XKB_KEY_Super_R, Key_RightGui) /* XKB_KEY_Super_R, Right super  */ \
   OP(XKB_KEY_Sys_Req, LALT(Key_PrintScreen)) /* XKB_KEY_Sys_Req */ \
   OP(XKB_KEY_Tab, Key_Tab) /* XKB_KEY_Tab */ \
   OP(XKB_KEY_Up, Key_UpArrow) /* XKB_KEY_Up, Move up, up arrow  */ \
   OP(XKB_KEY_XF86ClearGrab, LCTRL(LALT(Key_KeypadMultiply))) /* XKB_KEY_XF86ClearGrab, kill application with grab  */ \
   OP(XKB_KEY_XF86Next_VMode, LCTRL(LALT(Key_KeypadAdd))) /* XKB_KEY_XF86Next_VMode, next video mode available   */ \
   OP(XKB_KEY_XF86Prev_VMode, LCTRL(LALT(Key_KeypadSubtract))) /* XKB_KEY_XF86Prev_VMode, prev. video mode available  */ \
   OP(XKB_KEY_XF86Switch_VT_1, LCTRL(LALT(Key_F1))) /* XKB_KEY_XF86Switch_VT_1 */ \
   OP(XKB_KEY_XF86Switch_VT_10, LCTRL(LALT(Key_F10))) /* XKB_KEY_XF86Switch_VT_10 */ \
   OP(XKB_KEY_XF86Switch_VT_11, LCTRL(LALT(Key_F11))) /* XKB_KEY_XF86Switch_VT_11 */ \
   OP(XKB_KEY_XF86Switch_VT_12, LCTRL(LALT(Key_F12))) /* XKB_KEY_XF86Switch_VT_12 */ \
   OP(XKB_KEY_XF86Switch_VT_2, LCTRL(LALT(Key_F2))) /* XKB_KEY_XF86Switch_VT_2 */ \
   OP(XKB_KEY_XF86Switch_VT_3, LCTRL(LALT(Key_F3))) /* XKB_KEY_XF86Switch_VT_3 */ \
   OP(XKB_KEY_XF86Switch_VT_4, LCTRL(LALT(Key_F4))) /* XKB_KEY_XF86Switch_VT_4 */ \
   OP(XKB_KEY_XF86Switch_VT_5, LCTRL(LALT(Key_F5))) /* XKB_KEY_XF86Switch_VT_5 */ \
   OP(XKB_KEY_XF86Switch_VT_6, LCTRL(LALT(Key_F6))) /* XKB_KEY_XF86Switch_VT_6 */ \
   OP(XKB_KEY_XF86Switch_VT_7, LCTRL(LALT(Key_F7))) /* XKB_KEY_XF86Switch_VT_7 */ \
   OP(XKB_KEY_XF86Switch_VT_8, LCTRL(LALT(Key_F8))) /* XKB_KEY_XF86Switch_VT_8 */ \
   OP(XKB_KEY_XF86Switch_VT_9, LCTRL(LALT(Key_F9))) /* XKB_KEY_XF86Switch_VT_9 */ \
   OP(XKB_KEY_XF86Ungrab, LCTRL(LALT(Key_KeypadDivide))) /* XKB_KEY_XF86Ungrab, force ungrab                */ \
   OP(XKB_KEY_asterisk, RALT(Key_8)) \
   OP(XKB_KEY_at, RALT(Key_2)) \
   OP(XKB_KEY_backslash, RALT(Key_NonUsPound)) \
   OP(XKB_KEY_bar, RALT(Key_NonUsBackslashAndPipe)) \
   OP(XKB_KEY_braceleft, RALT(Key_9)) \
   OP(XKB_KEY_braceright, RALT(Key_0)) \
   OP(XKB_KEY_brokenbar, RALT(LSHIFT(Key_NonUsBackslashAndPipe))) \
   OP(XKB_KEY_comma, RALT(Key_Comma)) \
   OP(XKB_KEY_dollar, RALT(Key_4)) \
   OP(XKB_KEY_equal, LSHIFT(Key_Equals)) \
   OP(XKB_KEY_exclam, LSHIFT(Key_1)) \
   OP(XKB_KEY_greater, LSHIFT(Key_NonUsBackslashAndPipe)) \
   OP(XKB_KEY_guillemotleft, Key_Backtick) \
   OP(XKB_KEY_guillemotright, LSHIFT(Key_Backtick)) \
   OP(XKB_KEY_less, Key_NonUsBackslashAndPipe) \
   OP(XKB_KEY_parenleft, LSHIFT(Key_9)) \
   OP(XKB_KEY_parenright, LSHIFT(Key_0)) \
   OP(XKB_KEY_percent, LSHIFT(Key_5)) \
   OP(XKB_KEY_period, RALT(Key_Period)) \
   OP(XKB_KEY_question, LSHIFT(Key_Slash)) \
   OP(XKB_KEY_quotedbl, LSHIFT(Key_3)) \
   OP(XKB_KEY_slash, RALT(Key_Slash)) \
   OP(XKB_KEY_space, LSHIFT(Key_Spacebar)) \
   OP(XKB_KEY_x, RALT(Key_Minus)) \


namespace kaleidoscope {
namespace host_keymap {
namespace linux {
namespace kh {
namespace standard {

HOST_KEYMAP_LINUX(
  _HOST_KEYMAP_ASCII,
  _HOST_KEYMAP_UNICODE,
  _HOST_KEYMAP_NON_PRINTABLE
)

} // namespace standard
} // namespace kh
} // namespace linux
} // namespace host_keymap
} // namespace kaleidoscope

#undef _HOST_KEYMAP_ASCII
#undef _HOST_KEYMAP_UNICODE
#undef _HOST_KEYMAP_NON_PRINTABLE

