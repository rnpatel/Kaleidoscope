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

// layout: ara
// variant: digits

#define _HOST_KEYMAP_ASCII(OP) \
   OP('\b', Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP('\t', Key_Tab) /* XKB_KEY_Tab */ \
   OP('\r', Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP('\e', Key_Escape) /* XKB_KEY_Escape */ \
   OP(' ', Key_Spacebar) /* U+0020, XKB_KEY_space, SPACE */ \
   OP('!', LSHIFT(Key_1)) /* U+0021, XKB_KEY_exclam, EXCLAMATION MARK */ \
   OP('"', LSHIFT(Key_Quote)) /* U+0022, XKB_KEY_quotedbl, QUOTATION MARK */ \
   OP('#', LSHIFT(Key_3)) /* U+0023, XKB_KEY_numbersign, NUMBER SIGN */ \
   OP('$', LSHIFT(Key_4)) /* U+0024, XKB_KEY_dollar, DOLLAR SIGN */ \
   OP('%', RALT(Key_Backtick)) /* U+0025, XKB_KEY_percent, PERCENT SIGN */ \
   OP('&', LSHIFT(Key_7)) /* U+0026, XKB_KEY_ampersand, AMPERSAND */ \
   OP('\'', LSHIFT(Key_M)) /* U+0027, XKB_KEY_apostrophe, APOSTROPHE */ \
   OP('(', LSHIFT(Key_0)) /* U+0028, XKB_KEY_parenleft, LEFT PARENTHESIS */ \
   OP(')', LSHIFT(Key_9)) /* U+0029, XKB_KEY_parenright, RIGHT PARENTHESIS */ \
   OP('*', Key_KeypadMultiply) /* XKB_KEY_KP_Multiply */ \
   OP('+', Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP(',', LSHIFT(Key_Comma)) /* U+002c, XKB_KEY_comma, COMMA */ \
   OP('-', Key_Minus) /* U+002d, XKB_KEY_minus, HYPHEN-MINUS */ \
   OP('.', LSHIFT(Key_Period)) /* U+002e, XKB_KEY_period, FULL STOP */ \
   OP('/', Key_KeypadDivide) /* XKB_KEY_KP_Divide */ \
   OP('0', RALT(Key_0)) /* U+0030, XKB_KEY_0, DIGIT ZERO */ \
   OP('1', RALT(Key_1)) /* U+0031, XKB_KEY_1, DIGIT ONE */ \
   OP('2', RALT(Key_2)) /* U+0032, XKB_KEY_2, DIGIT TWO */ \
   OP('3', RALT(Key_3)) /* U+0033, XKB_KEY_3, DIGIT THREE */ \
   OP('4', RALT(Key_4)) /* U+0034, XKB_KEY_4, DIGIT FOUR */ \
   OP('5', RALT(Key_5)) /* U+0035, XKB_KEY_5, DIGIT FIVE */ \
   OP('6', RALT(Key_6)) /* U+0036, XKB_KEY_6, DIGIT SIX */ \
   OP('7', RALT(Key_7)) /* U+0037, XKB_KEY_7, DIGIT SEVEN */ \
   OP('8', RALT(Key_8)) /* U+0038, XKB_KEY_8, DIGIT EIGHT */ \
   OP('9', RALT(Key_9)) /* U+0039, XKB_KEY_9, DIGIT NINE */ \
   OP(':', LSHIFT(Key_Semicolon)) /* U+003a, XKB_KEY_colon, COLON */ \
   OP('<', LSHIFT(Key_LeftBracket)) /* U+003c, XKB_KEY_less, LESS-THAN SIGN */ \
   OP('=', Key_Equals) /* U+003d, XKB_KEY_equal, EQUALS SIGN */ \
   OP('>', LSHIFT(Key_RightBracket)) /* U+003e, XKB_KEY_greater, GREATER-THAN SIGN */ \
   OP('@', LSHIFT(Key_2)) /* U+0040, XKB_KEY_at, COMMERCIAL AT */ \
   OP('[', LSHIFT(Key_F)) /* U+005b, XKB_KEY_bracketleft, LEFT SQUARE BRACKET */ \
   OP('\\', Key_NonUsPound) /* U+005c, XKB_KEY_backslash, REVERSE SOLIDUS */ \
   OP(']', LSHIFT(Key_D)) /* U+005d, XKB_KEY_bracketright, RIGHT SQUARE BRACKET */ \
   OP('^', LSHIFT(Key_6)) /* U+005e, XKB_KEY_asciicircum, CIRCUMFLEX ACCENT */ \
   OP('_', LSHIFT(Key_Minus)) /* U+005f, XKB_KEY_underscore, LOW LINE */ \
   OP('`', LSHIFT(Key_U)) /* U+0060, XKB_KEY_grave, GRAVE ACCENT */ \
   OP('{', LSHIFT(Key_V)) /* U+007b, XKB_KEY_braceleft, LEFT CURLY BRACKET */ \
   OP('|', Key_NonUsBackslashAndPipe) /* U+007c, XKB_KEY_bar, VERTICAL LINE */ \
   OP('}', LSHIFT(Key_C)) /* U+007d, XKB_KEY_braceright, RIGHT CURLY BRACKET */ \
   OP('~', LSHIFT(Key_Z)) /* U+007e, XKB_KEY_asciitilde, TILDE */ \
   OP('', Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \

#define _HOST_KEYMAP_UNICODE(OP) \
   OP(L'\b', Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP(L'\t', Key_Tab) /* XKB_KEY_Tab */ \
   OP(L'\r', Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP(L'\e', Key_Escape) /* XKB_KEY_Escape */ \
   OP(L' ', Key_Spacebar) /* U+0020, XKB_KEY_space, SPACE */ \
   OP(L'!', LSHIFT(Key_1)) /* U+0021, XKB_KEY_exclam, EXCLAMATION MARK */ \
   OP(L'"', LSHIFT(Key_Quote)) /* U+0022, XKB_KEY_quotedbl, QUOTATION MARK */ \
   OP(L'#', LSHIFT(Key_3)) /* U+0023, XKB_KEY_numbersign, NUMBER SIGN */ \
   OP(L'$', LSHIFT(Key_4)) /* U+0024, XKB_KEY_dollar, DOLLAR SIGN */ \
   OP(L'%', RALT(Key_Backtick)) /* U+0025, XKB_KEY_percent, PERCENT SIGN */ \
   OP(L'&', LSHIFT(Key_7)) /* U+0026, XKB_KEY_ampersand, AMPERSAND */ \
   OP(L'\'', LSHIFT(Key_M)) /* U+0027, XKB_KEY_apostrophe, APOSTROPHE */ \
   OP(L'(', LSHIFT(Key_0)) /* U+0028, XKB_KEY_parenleft, LEFT PARENTHESIS */ \
   OP(L')', LSHIFT(Key_9)) /* U+0029, XKB_KEY_parenright, RIGHT PARENTHESIS */ \
   OP(L'*', Key_KeypadMultiply) /* XKB_KEY_KP_Multiply */ \
   OP(L'+', Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP(L',', LSHIFT(Key_Comma)) /* U+002c, XKB_KEY_comma, COMMA */ \
   OP(L'-', Key_Minus) /* U+002d, XKB_KEY_minus, HYPHEN-MINUS */ \
   OP(L'.', LSHIFT(Key_Period)) /* U+002e, XKB_KEY_period, FULL STOP */ \
   OP(L'/', Key_KeypadDivide) /* XKB_KEY_KP_Divide */ \
   OP(L'0', RALT(Key_0)) /* U+0030, XKB_KEY_0, DIGIT ZERO */ \
   OP(L'1', RALT(Key_1)) /* U+0031, XKB_KEY_1, DIGIT ONE */ \
   OP(L'2', RALT(Key_2)) /* U+0032, XKB_KEY_2, DIGIT TWO */ \
   OP(L'3', RALT(Key_3)) /* U+0033, XKB_KEY_3, DIGIT THREE */ \
   OP(L'4', RALT(Key_4)) /* U+0034, XKB_KEY_4, DIGIT FOUR */ \
   OP(L'5', RALT(Key_5)) /* U+0035, XKB_KEY_5, DIGIT FIVE */ \
   OP(L'6', RALT(Key_6)) /* U+0036, XKB_KEY_6, DIGIT SIX */ \
   OP(L'7', RALT(Key_7)) /* U+0037, XKB_KEY_7, DIGIT SEVEN */ \
   OP(L'8', RALT(Key_8)) /* U+0038, XKB_KEY_8, DIGIT EIGHT */ \
   OP(L'9', RALT(Key_9)) /* U+0039, XKB_KEY_9, DIGIT NINE */ \
   OP(L':', LSHIFT(Key_Semicolon)) /* U+003a, XKB_KEY_colon, COLON */ \
   OP(L'<', LSHIFT(Key_LeftBracket)) /* U+003c, XKB_KEY_less, LESS-THAN SIGN */ \
   OP(L'=', Key_Equals) /* U+003d, XKB_KEY_equal, EQUALS SIGN */ \
   OP(L'>', LSHIFT(Key_RightBracket)) /* U+003e, XKB_KEY_greater, GREATER-THAN SIGN */ \
   OP(L'@', LSHIFT(Key_2)) /* U+0040, XKB_KEY_at, COMMERCIAL AT */ \
   OP(L'[', LSHIFT(Key_F)) /* U+005b, XKB_KEY_bracketleft, LEFT SQUARE BRACKET */ \
   OP(L'\\', Key_NonUsPound) /* U+005c, XKB_KEY_backslash, REVERSE SOLIDUS */ \
   OP(L']', LSHIFT(Key_D)) /* U+005d, XKB_KEY_bracketright, RIGHT SQUARE BRACKET */ \
   OP(L'^', LSHIFT(Key_6)) /* U+005e, XKB_KEY_asciicircum, CIRCUMFLEX ACCENT */ \
   OP(L'_', LSHIFT(Key_Minus)) /* U+005f, XKB_KEY_underscore, LOW LINE */ \
   OP(L'`', LSHIFT(Key_U)) /* U+0060, XKB_KEY_grave, GRAVE ACCENT */ \
   OP(L'{', LSHIFT(Key_V)) /* U+007b, XKB_KEY_braceleft, LEFT CURLY BRACKET */ \
   OP(L'|', Key_NonUsBackslashAndPipe) /* U+007c, XKB_KEY_bar, VERTICAL LINE */ \
   OP(L'}', LSHIFT(Key_C)) /* U+007d, XKB_KEY_braceright, RIGHT CURLY BRACKET */ \
   OP(L'~', LSHIFT(Key_Z)) /* U+007e, XKB_KEY_asciitilde, TILDE */ \
   OP(L'', Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \
   OP(L'¦', LSHIFT(Key_NonUsBackslashAndPipe)) /* U+00a6, XKB_KEY_brokenbar, BROKEN BAR */ \
   OP(L'«', RALT(Key_X)) /* U+00ab, XKB_KEY_guillemotleft, LEFT-POINTING DOUBLE ANGLE QUOTATION MARK */ \
   OP(L'»', RALT(Key_Z)) /* U+00bb, XKB_KEY_guillemotright, RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK */ \
   OP(L'×', LSHIFT(Key_O)) /* U+00d7, XKB_KEY_multiply, MULTIPLICATION SIGN */ \
   OP(L'÷', LSHIFT(Key_I)) /* U+00f7, XKB_KEY_division, DIVISION SIGN */ \
   OP(L'؉', RALT(LSHIFT(Key_5))) \
   OP(L'،', LSHIFT(Key_K)) /* U+060c, XKB_KEY_Arabic_comma, ARABIC COMMA */ \
   OP(L'؛', LSHIFT(Key_P)) /* U+061b, XKB_KEY_Arabic_semicolon, ARABIC SEMICOLON */ \
   OP(L'؜', RALT(LSHIFT(Key_RightBracket))) \
   OP(L'؟', LSHIFT(Key_Slash)) /* U+061f, XKB_KEY_Arabic_question_mark, ARABIC QUESTION MARK */ \
   OP(L'ء', Key_X) /* U+0621, XKB_KEY_Arabic_hamza, ARABIC LETTER HAMZA */ \
   OP(L'آ', LSHIFT(Key_N)) /* U+0622, XKB_KEY_Arabic_maddaonalef, ARABIC LETTER ALEF WITH MADDA ABOVE */ \
   OP(L'أ', LSHIFT(Key_H)) /* U+0623, XKB_KEY_Arabic_hamzaonalef, ARABIC LETTER ALEF WITH HAMZA ABOVE */ \
   OP(L'ؤ', Key_C) /* U+0624, XKB_KEY_Arabic_hamzaonwaw, ARABIC LETTER WAW WITH HAMZA ABOVE */ \
   OP(L'إ', LSHIFT(Key_Y)) /* U+0625, XKB_KEY_Arabic_hamzaunderalef, ARABIC LETTER ALEF WITH HAMZA BELOW */ \
   OP(L'ئ', Key_Z) /* U+0626, XKB_KEY_Arabic_hamzaonyeh, ARABIC LETTER YEH WITH HAMZA ABOVE */ \
   OP(L'ا', Key_H) /* U+0627, XKB_KEY_Arabic_alef, ARABIC LETTER ALEF */ \
   OP(L'ب', Key_F) /* U+0628, XKB_KEY_Arabic_beh, ARABIC LETTER BEH */ \
   OP(L'ة', Key_M) /* U+0629, XKB_KEY_Arabic_tehmarbuta, ARABIC LETTER TEH MARBUTA */ \
   OP(L'ت', Key_J) /* U+062a, XKB_KEY_Arabic_teh, ARABIC LETTER TEH */ \
   OP(L'ث', Key_E) /* U+062b, XKB_KEY_Arabic_theh, ARABIC LETTER THEH */ \
   OP(L'ج', Key_LeftBracket) /* U+062c, XKB_KEY_Arabic_jeem, ARABIC LETTER JEEM */ \
   OP(L'ح', Key_P) /* U+062d, XKB_KEY_Arabic_hah, ARABIC LETTER HAH */ \
   OP(L'خ', Key_O) /* U+062e, XKB_KEY_Arabic_khah, ARABIC LETTER KHAH */ \
   OP(L'د', Key_RightBracket) /* U+062f, XKB_KEY_Arabic_dal, ARABIC LETTER DAL */ \
   OP(L'ذ', Key_Backtick) /* U+0630, XKB_KEY_Arabic_thal, ARABIC LETTER THAL */ \
   OP(L'ر', Key_V) /* U+0631, XKB_KEY_Arabic_ra, ARABIC LETTER REH */ \
   OP(L'ز', Key_Period) /* U+0632, XKB_KEY_Arabic_zain, ARABIC LETTER ZAIN */ \
   OP(L'س', Key_S) /* U+0633, XKB_KEY_Arabic_seen, ARABIC LETTER SEEN */ \
   OP(L'ش', Key_A) /* U+0634, XKB_KEY_Arabic_sheen, ARABIC LETTER SHEEN */ \
   OP(L'ص', Key_W) /* U+0635, XKB_KEY_Arabic_sad, ARABIC LETTER SAD */ \
   OP(L'ض', Key_Q) /* U+0636, XKB_KEY_Arabic_dad, ARABIC LETTER DAD */ \
   OP(L'ط', Key_Quote) /* U+0637, XKB_KEY_Arabic_tah, ARABIC LETTER TAH */ \
   OP(L'ظ', Key_Slash) /* U+0638, XKB_KEY_Arabic_zah, ARABIC LETTER ZAH */ \
   OP(L'ع', Key_U) /* U+0639, XKB_KEY_Arabic_ain, ARABIC LETTER AIN */ \
   OP(L'غ', Key_Y) /* U+063a, XKB_KEY_Arabic_ghain, ARABIC LETTER GHAIN */ \
   OP(L'ـ', LSHIFT(Key_J)) /* U+0640, XKB_KEY_Arabic_tatweel, ARABIC TATWEEL */ \
   OP(L'ف', Key_T) /* U+0641, XKB_KEY_Arabic_feh, ARABIC LETTER FEH */ \
   OP(L'ق', Key_R) /* U+0642, XKB_KEY_Arabic_qaf, ARABIC LETTER QAF */ \
   OP(L'ك', Key_Semicolon) /* U+0643, XKB_KEY_Arabic_kaf, ARABIC LETTER KAF */ \
   OP(L'ل', Key_G) /* U+0644, XKB_KEY_Arabic_lam, ARABIC LETTER LAM */ \
   OP(L'م', Key_L) /* U+0645, XKB_KEY_Arabic_meem, ARABIC LETTER MEEM */ \
   OP(L'ن', Key_K) /* U+0646, XKB_KEY_Arabic_noon, ARABIC LETTER NOON */ \
   OP(L'ه', Key_I) /* U+0647, XKB_KEY_Arabic_ha, ARABIC LETTER HEH */ \
   OP(L'و', Key_Comma) /* U+0648, XKB_KEY_Arabic_waw, ARABIC LETTER WAW */ \
   OP(L'ى', Key_N) /* U+0649, XKB_KEY_Arabic_alefmaksura, ARABIC LETTER ALEF MAKSURA */ \
   OP(L'ي', Key_D) /* U+064a, XKB_KEY_Arabic_yeh, ARABIC LETTER YEH */ \
   OP(L'ً', LSHIFT(Key_W)) /* U+064b, XKB_KEY_Arabic_fathatan, ARABIC FATHATAN */ \
   OP(L'ٌ', LSHIFT(Key_R)) /* U+064c, XKB_KEY_Arabic_dammatan, ARABIC DAMMATAN */ \
   OP(L'ٍ', LSHIFT(Key_S)) /* U+064d, XKB_KEY_Arabic_kasratan, ARABIC KASRATAN */ \
   OP(L'َ', LSHIFT(Key_Q)) /* U+064e, XKB_KEY_Arabic_fatha, ARABIC FATHA */ \
   OP(L'ُ', LSHIFT(Key_E)) /* U+064f, XKB_KEY_Arabic_damma, ARABIC DAMMA */ \
   OP(L'ِ', LSHIFT(Key_A)) /* U+0650, XKB_KEY_Arabic_kasra, ARABIC KASRA */ \
   OP(L'ّ', LSHIFT(Key_Backtick)) /* U+0651, XKB_KEY_Arabic_shadda, ARABIC SHADDA */ \
   OP(L'ْ', LSHIFT(Key_X)) /* U+0652, XKB_KEY_Arabic_sukun, ARABIC SUKUN */ \
   OP(L'٠', Key_0) /* U+0660, XKB_KEY_Arabic_0, ARABIC-INDIC DIGIT ZERO */ \
   OP(L'١', Key_1) /* U+0661, XKB_KEY_Arabic_1, ARABIC-INDIC DIGIT ONE */ \
   OP(L'٢', Key_2) /* U+0662, XKB_KEY_Arabic_2, ARABIC-INDIC DIGIT TWO */ \
   OP(L'٣', Key_3) /* U+0663, XKB_KEY_Arabic_3, ARABIC-INDIC DIGIT THREE */ \
   OP(L'٤', Key_4) /* U+0664, XKB_KEY_Arabic_4, ARABIC-INDIC DIGIT FOUR */ \
   OP(L'٥', Key_5) /* U+0665, XKB_KEY_Arabic_5, ARABIC-INDIC DIGIT FIVE */ \
   OP(L'٦', Key_6) /* U+0666, XKB_KEY_Arabic_6, ARABIC-INDIC DIGIT SIX */ \
   OP(L'٧', Key_7) /* U+0667, XKB_KEY_Arabic_7, ARABIC-INDIC DIGIT SEVEN */ \
   OP(L'٨', Key_8) /* U+0668, XKB_KEY_Arabic_8, ARABIC-INDIC DIGIT EIGHT */ \
   OP(L'٩', Key_9) /* U+0669, XKB_KEY_Arabic_9, ARABIC-INDIC DIGIT NINE */ \
   OP(L'٪', LSHIFT(Key_5)) /* U+066a, XKB_KEY_Arabic_percent, ARABIC PERCENT SIGN */ \
   OP(L'٫', RALT(Key_K)) \
   OP(L'٬', RALT(Key_Comma)) \
   OP(L'٭', RALT(Key_Slash)) \
   OP(L'ٰ', RALT(Key_N)) /* U+0670, XKB_KEY_Arabic_superscript_alef, ARABIC LETTER SUPERSCRIPT ALEF */ \
   OP(L'ٱ', RALT(Key_H)) \
   OP(L'پ', RALT(Key_F)) /* U+067e, XKB_KEY_Arabic_peh, ARABIC LETTER PEH */ \
   OP(L'چ', RALT(Key_LeftBracket)) /* U+0686, XKB_KEY_Arabic_tcheh, ARABIC LETTER TCHEH */ \
   OP(L'ژ', RALT(Key_Period)) /* U+0698, XKB_KEY_Arabic_jeh, ARABIC LETTER JEH */ \
   OP(L'ڤ', RALT(Key_T)) /* U+06a4, XKB_KEY_Arabic_veh, ARABIC LETTER VEH */ \
   OP(L'گ', RALT(Key_Semicolon)) /* U+06af, XKB_KEY_Arabic_gaf, ARABIC LETTER GAF */ \
   OP(L'‌', RALT(LSHIFT(Key_Slash))) \
   OP(L'‍', RALT(LSHIFT(Key_Quote))) \
   OP(L'‎', RALT(LSHIFT(Key_P))) \
   OP(L'‏', RALT(LSHIFT(Key_LeftBracket))) \
   OP(L'‑', RALT(LSHIFT(Key_Minus))) \
   OP(L'–', RALT(Key_Minus)) /* U+2013, XKB_KEY_endash, EN DASH */ \
   OP(L'…', LSHIFT(Key_NonUsPound)) /* U+2026, XKB_KEY_ellipsis, HORIZONTAL ELLIPSIS */ \
   OP(L'‪', RALT(LSHIFT(Key_Y))) \
   OP(L'‫', RALT(LSHIFT(Key_U))) \
   OP(L'‬', RALT(LSHIFT(Key_I))) \
   OP(L' ', RALT(LSHIFT(Key_NonUsPound))) \
   OP(L'‰', RALT(LSHIFT(Key_Backtick))) \
   OP(L'‹', RALT(LSHIFT(Key_X))) \
   OP(L'›', RALT(LSHIFT(Key_Z))) \
   OP(L'⁦', RALT(LSHIFT(Key_Q))) \
   OP(L'⁧', RALT(LSHIFT(Key_W))) \
   OP(L'⁨', RALT(LSHIFT(Key_E))) \
   OP(L'⁩', RALT(LSHIFT(Key_R))) \
   OP(L'≈', RALT(LSHIFT(Key_Equals))) /* U+2248, XKB_KEY_approxeq, ALMOST EQUAL TO */ \
   OP(L'≠', RALT(Key_Equals)) /* U+2260, XKB_KEY_notequal, NOT EQUAL TO */ \
   OP(L'⟨', RALT(Key_NonUsPound)) \
   OP(L'⟩', RALT(Key_Quote)) \
   OP(L'ﻵ', LSHIFT(Key_B)) \
   OP(L'ﻷ', LSHIFT(Key_G)) \
   OP(L'ﻹ', LSHIFT(Key_T)) \
   OP(L'ﻻ', Key_B) \

#define _HOST_KEYMAP_NON_PRINTABLE(OP) \
   OP(XKB_KEY_0, RALT(Key_0)) \
   OP(XKB_KEY_1, RALT(Key_1)) \
   OP(XKB_KEY_2, RALT(Key_2)) \
   OP(XKB_KEY_3, RALT(Key_3)) \
   OP(XKB_KEY_4, RALT(Key_4)) \
   OP(XKB_KEY_5, RALT(Key_5)) \
   OP(XKB_KEY_6, RALT(Key_6)) \
   OP(XKB_KEY_7, RALT(Key_7)) \
   OP(XKB_KEY_8, RALT(Key_8)) \
   OP(XKB_KEY_9, RALT(Key_9)) \
   OP(XKB_KEY_Alt_L, Key_LeftAlt) /* XKB_KEY_Alt_L, Left alt  */ \
   OP(XKB_KEY_Arabic_0, Key_0) \
   OP(XKB_KEY_Arabic_1, Key_1) \
   OP(XKB_KEY_Arabic_2, Key_2) \
   OP(XKB_KEY_Arabic_3, Key_3) \
   OP(XKB_KEY_Arabic_4, Key_4) \
   OP(XKB_KEY_Arabic_5, Key_5) \
   OP(XKB_KEY_Arabic_6, Key_6) \
   OP(XKB_KEY_Arabic_7, Key_7) \
   OP(XKB_KEY_Arabic_8, Key_8) \
   OP(XKB_KEY_Arabic_9, Key_9) \
   OP(XKB_KEY_Arabic_ain, Key_U) \
   OP(XKB_KEY_Arabic_alef, Key_H) \
   OP(XKB_KEY_Arabic_alefmaksura, Key_N) \
   OP(XKB_KEY_Arabic_beh, Key_F) \
   OP(XKB_KEY_Arabic_comma, LSHIFT(Key_K)) \
   OP(XKB_KEY_Arabic_dad, Key_Q) \
   OP(XKB_KEY_Arabic_dal, Key_RightBracket) \
   OP(XKB_KEY_Arabic_damma, LSHIFT(Key_E)) \
   OP(XKB_KEY_Arabic_dammatan, LSHIFT(Key_R)) \
   OP(XKB_KEY_Arabic_fatha, LSHIFT(Key_Q)) \
   OP(XKB_KEY_Arabic_fathatan, LSHIFT(Key_W)) \
   OP(XKB_KEY_Arabic_feh, Key_T) \
   OP(XKB_KEY_Arabic_gaf, RALT(Key_Semicolon)) \
   OP(XKB_KEY_Arabic_ghain, Key_Y) \
   OP(XKB_KEY_Arabic_ha, Key_I) /* XKB_KEY_Arabic_heh, deprecated  */ \
   OP(XKB_KEY_Arabic_hah, Key_P) \
   OP(XKB_KEY_Arabic_hamza, Key_X) \
   OP(XKB_KEY_Arabic_hamzaonalef, LSHIFT(Key_H)) \
   OP(XKB_KEY_Arabic_hamzaonwaw, Key_C) \
   OP(XKB_KEY_Arabic_hamzaonyeh, Key_Z) \
   OP(XKB_KEY_Arabic_hamzaunderalef, LSHIFT(Key_Y)) \
   OP(XKB_KEY_Arabic_jeem, Key_LeftBracket) \
   OP(XKB_KEY_Arabic_jeh, RALT(Key_Period)) \
   OP(XKB_KEY_Arabic_kaf, Key_Semicolon) \
   OP(XKB_KEY_Arabic_kasra, LSHIFT(Key_A)) \
   OP(XKB_KEY_Arabic_kasratan, LSHIFT(Key_S)) \
   OP(XKB_KEY_Arabic_khah, Key_O) \
   OP(XKB_KEY_Arabic_lam, Key_G) \
   OP(XKB_KEY_Arabic_maddaonalef, LSHIFT(Key_N)) \
   OP(XKB_KEY_Arabic_meem, Key_L) \
   OP(XKB_KEY_Arabic_noon, Key_K) \
   OP(XKB_KEY_Arabic_peh, RALT(Key_F)) \
   OP(XKB_KEY_Arabic_percent, LSHIFT(Key_5)) \
   OP(XKB_KEY_Arabic_qaf, Key_R) \
   OP(XKB_KEY_Arabic_question_mark, LSHIFT(Key_Slash)) \
   OP(XKB_KEY_Arabic_ra, Key_V) \
   OP(XKB_KEY_Arabic_sad, Key_W) \
   OP(XKB_KEY_Arabic_seen, Key_S) \
   OP(XKB_KEY_Arabic_semicolon, LSHIFT(Key_P)) \
   OP(XKB_KEY_Arabic_shadda, LSHIFT(Key_Backtick)) \
   OP(XKB_KEY_Arabic_sheen, Key_A) \
   OP(XKB_KEY_Arabic_sukun, LSHIFT(Key_X)) \
   OP(XKB_KEY_Arabic_superscript_alef, RALT(Key_N)) \
   OP(XKB_KEY_Arabic_tah, Key_Quote) \
   OP(XKB_KEY_Arabic_tatweel, LSHIFT(Key_J)) \
   OP(XKB_KEY_Arabic_tcheh, RALT(Key_LeftBracket)) \
   OP(XKB_KEY_Arabic_teh, Key_J) \
   OP(XKB_KEY_Arabic_tehmarbuta, Key_M) \
   OP(XKB_KEY_Arabic_thal, Key_Backtick) \
   OP(XKB_KEY_Arabic_theh, Key_E) \
   OP(XKB_KEY_Arabic_veh, RALT(Key_T)) \
   OP(XKB_KEY_Arabic_waw, Key_Comma) \
   OP(XKB_KEY_Arabic_yeh, Key_D) \
   OP(XKB_KEY_Arabic_zah, Key_Slash) \
   OP(XKB_KEY_Arabic_zain, Key_Period) \
   OP(XKB_KEY_BackSpace, Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP(XKB_KEY_Break, LCTRL(Key_Pause)) /* XKB_KEY_Break */ \
   OP(XKB_KEY_Caps_Lock, Key_CapsLock) /* XKB_KEY_Caps_Lock, Caps lock  */ \
   OP(XKB_KEY_Control_L, Key_LeftControl) /* XKB_KEY_Control_L, Left control  */ \
   OP(XKB_KEY_Control_R, Key_RightControl) /* XKB_KEY_Control_R, Right control  */ \
   OP(XKB_KEY_Delete, Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \
   OP(XKB_KEY_Down, Key_DownArrow) /* XKB_KEY_Down, Move down, down arrow  */ \
   OP(XKB_KEY_End, Key_End) /* XKB_KEY_End, EOL  */ \
   OP(XKB_KEY_Escape, Key_Escape) /* XKB_KEY_Escape */ \
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
   OP(XKB_KEY_KP_Add, Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP(XKB_KEY_KP_Begin, Key_Keypad5) /* XKB_KEY_KP_Begin */ \
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
   OP(XKB_KEY_ampersand, LSHIFT(Key_7)) \
   OP(XKB_KEY_apostrophe, LSHIFT(Key_M)) /* XKB_KEY_quoteright, deprecated  */ \
   OP(XKB_KEY_approxeq, RALT(LSHIFT(Key_Equals))) \
   OP(XKB_KEY_asciicircum, LSHIFT(Key_6)) \
   OP(XKB_KEY_asciitilde, LSHIFT(Key_Z)) \
   OP(XKB_KEY_asterisk, LSHIFT(Key_8)) \
   OP(XKB_KEY_at, LSHIFT(Key_2)) \
   OP(XKB_KEY_backslash, Key_NonUsPound) \
   OP(XKB_KEY_bar, Key_NonUsBackslashAndPipe) \
   OP(XKB_KEY_braceleft, LSHIFT(Key_V)) \
   OP(XKB_KEY_braceright, LSHIFT(Key_C)) \
   OP(XKB_KEY_bracketleft, LSHIFT(Key_F)) \
   OP(XKB_KEY_bracketright, LSHIFT(Key_D)) \
   OP(XKB_KEY_brokenbar, LSHIFT(Key_NonUsBackslashAndPipe)) \
   OP(XKB_KEY_colon, LSHIFT(Key_Semicolon)) \
   OP(XKB_KEY_comma, LSHIFT(Key_Comma)) \
   OP(XKB_KEY_division, LSHIFT(Key_I)) \
   OP(XKB_KEY_dollar, LSHIFT(Key_4)) \
   OP(XKB_KEY_ellipsis, LSHIFT(Key_NonUsPound)) \
   OP(XKB_KEY_endash, RALT(Key_Minus)) \
   OP(XKB_KEY_equal, Key_Equals) \
   OP(XKB_KEY_exclam, LSHIFT(Key_1)) \
   OP(XKB_KEY_grave, LSHIFT(Key_U)) /* XKB_KEY_quoteleft, deprecated  */ \
   OP(XKB_KEY_greater, LSHIFT(Key_RightBracket)) \
   OP(XKB_KEY_guillemotleft, RALT(Key_X)) \
   OP(XKB_KEY_guillemotright, RALT(Key_Z)) \
   OP(XKB_KEY_less, LSHIFT(Key_LeftBracket)) \
   OP(XKB_KEY_minus, Key_Minus) \
   OP(XKB_KEY_multiply, LSHIFT(Key_O)) \
   OP(XKB_KEY_notequal, RALT(Key_Equals)) \
   OP(XKB_KEY_numbersign, LSHIFT(Key_3)) \
   OP(XKB_KEY_parenleft, LSHIFT(Key_0)) \
   OP(XKB_KEY_parenright, LSHIFT(Key_9)) \
   OP(XKB_KEY_percent, RALT(Key_Backtick)) \
   OP(XKB_KEY_period, LSHIFT(Key_Period)) \
   OP(XKB_KEY_plus, LSHIFT(Key_Equals)) \
   OP(XKB_KEY_quotedbl, LSHIFT(Key_Quote)) \
   OP(XKB_KEY_slash, LSHIFT(Key_L)) \
   OP(XKB_KEY_space, Key_Spacebar) \
   OP(XKB_KEY_underscore, LSHIFT(Key_Minus)) \


namespace kaleidoscope {
namespace host_keymap {
namespace linux {
namespace ara {
namespace digits {

HOST_KEYMAP_LINUX(
  _HOST_KEYMAP_ASCII,
  _HOST_KEYMAP_UNICODE,
  _HOST_KEYMAP_NON_PRINTABLE
)

} // namespace digits
} // namespace ara
} // namespace linux
} // namespace host_keymap
} // namespace kaleidoscope

#undef _HOST_KEYMAP_ASCII
#undef _HOST_KEYMAP_UNICODE
#undef _HOST_KEYMAP_NON_PRINTABLE

