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

// layout: uz
// variant: standard

#define _HOST_KEYMAP_ASCII(OP) \
   OP('\b', Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP('\t', Key_Tab) /* XKB_KEY_Tab */ \
   OP('\r', Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP('\e', Key_Escape) /* XKB_KEY_Escape */ \
   OP(' ', Key_Spacebar) /* U+0020, XKB_KEY_space, SPACE */ \
   OP('!', LSHIFT(Key_1)) /* U+0021, XKB_KEY_exclam, EXCLAMATION MARK */ \
   OP('"', LSHIFT(Key_2)) /* U+0022, XKB_KEY_quotedbl, QUOTATION MARK */ \
   OP('%', LSHIFT(Key_5)) /* U+0025, XKB_KEY_percent, PERCENT SIGN */ \
   OP('(', LSHIFT(Key_9)) /* U+0028, XKB_KEY_parenleft, LEFT PARENTHESIS */ \
   OP(')', LSHIFT(Key_0)) /* U+0029, XKB_KEY_parenright, RIGHT PARENTHESIS */ \
   OP('*', Key_KeypadMultiply) /* XKB_KEY_KP_Multiply */ \
   OP('+', Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP(',', LSHIFT(Key_Slash)) /* U+002c, XKB_KEY_comma, COMMA */ \
   OP('-', Key_KeypadSubtract) /* XKB_KEY_KP_Subtract */ \
   OP('.', Key_Slash) /* U+002e, XKB_KEY_period, FULL STOP */ \
   OP('/', Key_NonUsBackslashAndPipe) /* U+002f, XKB_KEY_slash, SOLIDUS */ \
   OP('0', Key_0) /* U+0030, XKB_KEY_0, DIGIT ZERO */ \
   OP('1', Key_1) /* U+0031, XKB_KEY_1, DIGIT ONE */ \
   OP('2', Key_2) /* U+0032, XKB_KEY_2, DIGIT TWO */ \
   OP('3', Key_3) /* U+0033, XKB_KEY_3, DIGIT THREE */ \
   OP('4', Key_4) /* U+0034, XKB_KEY_4, DIGIT FOUR */ \
   OP('5', Key_5) /* U+0035, XKB_KEY_5, DIGIT FIVE */ \
   OP('6', Key_6) /* U+0036, XKB_KEY_6, DIGIT SIX */ \
   OP('7', Key_7) /* U+0037, XKB_KEY_7, DIGIT SEVEN */ \
   OP('8', Key_8) /* U+0038, XKB_KEY_8, DIGIT EIGHT */ \
   OP('9', Key_9) /* U+0039, XKB_KEY_9, DIGIT NINE */ \
   OP(':', LSHIFT(Key_6)) /* U+003a, XKB_KEY_colon, COLON */ \
   OP(';', LSHIFT(Key_4)) /* U+003b, XKB_KEY_semicolon, SEMICOLON */ \
   OP('?', LSHIFT(Key_7)) /* U+003f, XKB_KEY_question, QUESTION MARK */ \
   OP('\\', Key_NonUsPound) /* U+005c, XKB_KEY_backslash, REVERSE SOLIDUS */ \
   OP('|', LSHIFT(Key_NonUsPound)) /* U+007c, XKB_KEY_bar, VERTICAL LINE */ \
   OP('', Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \

#define _HOST_KEYMAP_UNICODE(OP) \
   OP(L'\b', Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP(L'\t', Key_Tab) /* XKB_KEY_Tab */ \
   OP(L'\r', Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP(L'\e', Key_Escape) /* XKB_KEY_Escape */ \
   OP(L' ', Key_Spacebar) /* U+0020, XKB_KEY_space, SPACE */ \
   OP(L'!', LSHIFT(Key_1)) /* U+0021, XKB_KEY_exclam, EXCLAMATION MARK */ \
   OP(L'"', LSHIFT(Key_2)) /* U+0022, XKB_KEY_quotedbl, QUOTATION MARK */ \
   OP(L'%', LSHIFT(Key_5)) /* U+0025, XKB_KEY_percent, PERCENT SIGN */ \
   OP(L'(', LSHIFT(Key_9)) /* U+0028, XKB_KEY_parenleft, LEFT PARENTHESIS */ \
   OP(L')', LSHIFT(Key_0)) /* U+0029, XKB_KEY_parenright, RIGHT PARENTHESIS */ \
   OP(L'*', Key_KeypadMultiply) /* XKB_KEY_KP_Multiply */ \
   OP(L'+', Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP(L',', LSHIFT(Key_Slash)) /* U+002c, XKB_KEY_comma, COMMA */ \
   OP(L'-', Key_KeypadSubtract) /* XKB_KEY_KP_Subtract */ \
   OP(L'.', Key_Slash) /* U+002e, XKB_KEY_period, FULL STOP */ \
   OP(L'/', Key_NonUsBackslashAndPipe) /* U+002f, XKB_KEY_slash, SOLIDUS */ \
   OP(L'0', Key_0) /* U+0030, XKB_KEY_0, DIGIT ZERO */ \
   OP(L'1', Key_1) /* U+0031, XKB_KEY_1, DIGIT ONE */ \
   OP(L'2', Key_2) /* U+0032, XKB_KEY_2, DIGIT TWO */ \
   OP(L'3', Key_3) /* U+0033, XKB_KEY_3, DIGIT THREE */ \
   OP(L'4', Key_4) /* U+0034, XKB_KEY_4, DIGIT FOUR */ \
   OP(L'5', Key_5) /* U+0035, XKB_KEY_5, DIGIT FIVE */ \
   OP(L'6', Key_6) /* U+0036, XKB_KEY_6, DIGIT SIX */ \
   OP(L'7', Key_7) /* U+0037, XKB_KEY_7, DIGIT SEVEN */ \
   OP(L'8', Key_8) /* U+0038, XKB_KEY_8, DIGIT EIGHT */ \
   OP(L'9', Key_9) /* U+0039, XKB_KEY_9, DIGIT NINE */ \
   OP(L':', LSHIFT(Key_6)) /* U+003a, XKB_KEY_colon, COLON */ \
   OP(L';', LSHIFT(Key_4)) /* U+003b, XKB_KEY_semicolon, SEMICOLON */ \
   OP(L'?', LSHIFT(Key_7)) /* U+003f, XKB_KEY_question, QUESTION MARK */ \
   OP(L'\\', Key_NonUsPound) /* U+005c, XKB_KEY_backslash, REVERSE SOLIDUS */ \
   OP(L'|', LSHIFT(Key_NonUsPound)) /* U+007c, XKB_KEY_bar, VERTICAL LINE */ \
   OP(L'', Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \
   OP(L'Ё', LSHIFT(Key_Backtick)) /* U+0401, XKB_KEY_Cyrillic_IO, CYRILLIC CAPITAL LETTER IO */ \
   OP(L'Ў', LSHIFT(Key_O)) /* U+040e, XKB_KEY_Byelorussian_SHORTU, CYRILLIC CAPITAL LETTER SHORT U */ \
   OP(L'А', LSHIFT(Key_F)) /* U+0410, XKB_KEY_Cyrillic_A, CYRILLIC CAPITAL LETTER A */ \
   OP(L'Б', LSHIFT(Key_Comma)) /* U+0411, XKB_KEY_Cyrillic_BE, CYRILLIC CAPITAL LETTER BE */ \
   OP(L'В', LSHIFT(Key_D)) /* U+0412, XKB_KEY_Cyrillic_VE, CYRILLIC CAPITAL LETTER VE */ \
   OP(L'Г', LSHIFT(Key_U)) /* U+0413, XKB_KEY_Cyrillic_GHE, CYRILLIC CAPITAL LETTER GHE */ \
   OP(L'Д', LSHIFT(Key_L)) /* U+0414, XKB_KEY_Cyrillic_DE, CYRILLIC CAPITAL LETTER DE */ \
   OP(L'Е', LSHIFT(Key_T)) /* U+0415, XKB_KEY_Cyrillic_IE, CYRILLIC CAPITAL LETTER IE */ \
   OP(L'Ж', LSHIFT(Key_Semicolon)) /* U+0416, XKB_KEY_Cyrillic_ZHE, CYRILLIC CAPITAL LETTER ZHE */ \
   OP(L'З', LSHIFT(Key_P)) /* U+0417, XKB_KEY_Cyrillic_ZE, CYRILLIC CAPITAL LETTER ZE */ \
   OP(L'И', LSHIFT(Key_B)) /* U+0418, XKB_KEY_Cyrillic_I, CYRILLIC CAPITAL LETTER I */ \
   OP(L'Й', LSHIFT(Key_Q)) /* U+0419, XKB_KEY_Cyrillic_SHORTI, CYRILLIC CAPITAL LETTER SHORT I */ \
   OP(L'К', LSHIFT(Key_R)) /* U+041a, XKB_KEY_Cyrillic_KA, CYRILLIC CAPITAL LETTER KA */ \
   OP(L'Л', LSHIFT(Key_K)) /* U+041b, XKB_KEY_Cyrillic_EL, CYRILLIC CAPITAL LETTER EL */ \
   OP(L'М', LSHIFT(Key_V)) /* U+041c, XKB_KEY_Cyrillic_EM, CYRILLIC CAPITAL LETTER EM */ \
   OP(L'Н', LSHIFT(Key_Y)) /* U+041d, XKB_KEY_Cyrillic_EN, CYRILLIC CAPITAL LETTER EN */ \
   OP(L'О', LSHIFT(Key_J)) /* U+041e, XKB_KEY_Cyrillic_O, CYRILLIC CAPITAL LETTER O */ \
   OP(L'П', LSHIFT(Key_G)) /* U+041f, XKB_KEY_Cyrillic_PE, CYRILLIC CAPITAL LETTER PE */ \
   OP(L'Р', LSHIFT(Key_H)) /* U+0420, XKB_KEY_Cyrillic_ER, CYRILLIC CAPITAL LETTER ER */ \
   OP(L'С', LSHIFT(Key_C)) /* U+0421, XKB_KEY_Cyrillic_ES, CYRILLIC CAPITAL LETTER ES */ \
   OP(L'Т', LSHIFT(Key_N)) /* U+0422, XKB_KEY_Cyrillic_TE, CYRILLIC CAPITAL LETTER TE */ \
   OP(L'У', LSHIFT(Key_E)) /* U+0423, XKB_KEY_Cyrillic_U, CYRILLIC CAPITAL LETTER U */ \
   OP(L'Ф', LSHIFT(Key_A)) /* U+0424, XKB_KEY_Cyrillic_EF, CYRILLIC CAPITAL LETTER EF */ \
   OP(L'Х', LSHIFT(Key_LeftBracket)) /* U+0425, XKB_KEY_Cyrillic_HA, CYRILLIC CAPITAL LETTER HA */ \
   OP(L'Ц', LSHIFT(Key_W)) /* U+0426, XKB_KEY_Cyrillic_TSE, CYRILLIC CAPITAL LETTER TSE */ \
   OP(L'Ч', LSHIFT(Key_X)) /* U+0427, XKB_KEY_Cyrillic_CHE, CYRILLIC CAPITAL LETTER CHE */ \
   OP(L'Ш', LSHIFT(Key_I)) /* U+0428, XKB_KEY_Cyrillic_SHA, CYRILLIC CAPITAL LETTER SHA */ \
   OP(L'Ъ', LSHIFT(Key_RightBracket)) /* U+042a, XKB_KEY_Cyrillic_HARDSIGN, CYRILLIC CAPITAL LETTER HARD SIGN */ \
   OP(L'Ь', LSHIFT(Key_M)) /* U+042c, XKB_KEY_Cyrillic_SOFTSIGN, CYRILLIC CAPITAL LETTER SOFT SIGN */ \
   OP(L'Э', LSHIFT(Key_Quote)) /* U+042d, XKB_KEY_Cyrillic_E, CYRILLIC CAPITAL LETTER E */ \
   OP(L'Ю', LSHIFT(Key_Period)) /* U+042e, XKB_KEY_Cyrillic_YU, CYRILLIC CAPITAL LETTER YU */ \
   OP(L'Я', LSHIFT(Key_Z)) /* U+042f, XKB_KEY_Cyrillic_YA, CYRILLIC CAPITAL LETTER YA */ \
   OP(L'а', Key_F) /* U+0430, XKB_KEY_Cyrillic_a, CYRILLIC SMALL LETTER A */ \
   OP(L'б', Key_Comma) /* U+0431, XKB_KEY_Cyrillic_be, CYRILLIC SMALL LETTER BE */ \
   OP(L'в', Key_D) /* U+0432, XKB_KEY_Cyrillic_ve, CYRILLIC SMALL LETTER VE */ \
   OP(L'г', Key_U) /* U+0433, XKB_KEY_Cyrillic_ghe, CYRILLIC SMALL LETTER GHE */ \
   OP(L'д', Key_L) /* U+0434, XKB_KEY_Cyrillic_de, CYRILLIC SMALL LETTER DE */ \
   OP(L'е', Key_T) /* U+0435, XKB_KEY_Cyrillic_ie, CYRILLIC SMALL LETTER IE */ \
   OP(L'ж', Key_Semicolon) /* U+0436, XKB_KEY_Cyrillic_zhe, CYRILLIC SMALL LETTER ZHE */ \
   OP(L'з', Key_P) /* U+0437, XKB_KEY_Cyrillic_ze, CYRILLIC SMALL LETTER ZE */ \
   OP(L'и', Key_B) /* U+0438, XKB_KEY_Cyrillic_i, CYRILLIC SMALL LETTER I */ \
   OP(L'й', Key_Q) /* U+0439, XKB_KEY_Cyrillic_shorti, CYRILLIC SMALL LETTER SHORT I */ \
   OP(L'к', Key_R) /* U+043a, XKB_KEY_Cyrillic_ka, CYRILLIC SMALL LETTER KA */ \
   OP(L'л', Key_K) /* U+043b, XKB_KEY_Cyrillic_el, CYRILLIC SMALL LETTER EL */ \
   OP(L'м', Key_V) /* U+043c, XKB_KEY_Cyrillic_em, CYRILLIC SMALL LETTER EM */ \
   OP(L'н', Key_Y) /* U+043d, XKB_KEY_Cyrillic_en, CYRILLIC SMALL LETTER EN */ \
   OP(L'о', Key_J) /* U+043e, XKB_KEY_Cyrillic_o, CYRILLIC SMALL LETTER O */ \
   OP(L'п', Key_G) /* U+043f, XKB_KEY_Cyrillic_pe, CYRILLIC SMALL LETTER PE */ \
   OP(L'р', Key_H) /* U+0440, XKB_KEY_Cyrillic_er, CYRILLIC SMALL LETTER ER */ \
   OP(L'с', Key_C) /* U+0441, XKB_KEY_Cyrillic_es, CYRILLIC SMALL LETTER ES */ \
   OP(L'т', Key_N) /* U+0442, XKB_KEY_Cyrillic_te, CYRILLIC SMALL LETTER TE */ \
   OP(L'у', Key_E) /* U+0443, XKB_KEY_Cyrillic_u, CYRILLIC SMALL LETTER U */ \
   OP(L'ф', Key_A) /* U+0444, XKB_KEY_Cyrillic_ef, CYRILLIC SMALL LETTER EF */ \
   OP(L'х', Key_LeftBracket) /* U+0445, XKB_KEY_Cyrillic_ha, CYRILLIC SMALL LETTER HA */ \
   OP(L'ц', Key_W) /* U+0446, XKB_KEY_Cyrillic_tse, CYRILLIC SMALL LETTER TSE */ \
   OP(L'ч', Key_X) /* U+0447, XKB_KEY_Cyrillic_che, CYRILLIC SMALL LETTER CHE */ \
   OP(L'ш', Key_I) /* U+0448, XKB_KEY_Cyrillic_sha, CYRILLIC SMALL LETTER SHA */ \
   OP(L'ъ', Key_RightBracket) /* U+044a, XKB_KEY_Cyrillic_hardsign, CYRILLIC SMALL LETTER HARD SIGN */ \
   OP(L'ь', Key_M) /* U+044c, XKB_KEY_Cyrillic_softsign, CYRILLIC SMALL LETTER SOFT SIGN */ \
   OP(L'э', Key_Quote) /* U+044d, XKB_KEY_Cyrillic_e, CYRILLIC SMALL LETTER E */ \
   OP(L'ю', Key_Period) /* U+044e, XKB_KEY_Cyrillic_yu, CYRILLIC SMALL LETTER YU */ \
   OP(L'я', Key_Z) /* U+044f, XKB_KEY_Cyrillic_ya, CYRILLIC SMALL LETTER YA */ \
   OP(L'ё', Key_Backtick) /* U+0451, XKB_KEY_Cyrillic_io, CYRILLIC SMALL LETTER IO */ \
   OP(L'ў', Key_O) /* U+045e, XKB_KEY_Byelorussian_shortu, CYRILLIC SMALL LETTER SHORT U */ \
   OP(L'Ғ', LSHIFT(Key_Minus)) /* U+0492, XKB_KEY_Cyrillic_GHE_bar, CYRILLIC CAPITAL LETTER GHE WITH STROKE */ \
   OP(L'ғ', Key_Minus) /* U+0493, XKB_KEY_Cyrillic_ghe_bar, CYRILLIC SMALL LETTER GHE WITH STROKE */ \
   OP(L'Қ', LSHIFT(Key_S)) /* U+049a, XKB_KEY_Cyrillic_KA_descender, CYRILLIC CAPITAL LETTER KA WITH DESCENDER */ \
   OP(L'қ', Key_S) /* U+049b, XKB_KEY_Cyrillic_ka_descender, CYRILLIC SMALL LETTER KA WITH DESCENDER */ \
   OP(L'Ҳ', LSHIFT(Key_Equals)) /* U+04b2, XKB_KEY_Cyrillic_HA_descender, CYRILLIC CAPITAL LETTER HA WITH DESCENDER */ \
   OP(L'ҳ', Key_Equals) /* U+04b3, XKB_KEY_Cyrillic_ha_descender, CYRILLIC SMALL LETTER HA WITH DESCENDER */ \
   OP(L'№', LSHIFT(Key_3)) /* U+2116, XKB_KEY_numerosign, NUMERO SIGN */ \

#define _HOST_KEYMAP_NON_PRINTABLE(OP) \
   OP(XKB_KEY_0, Key_0) \
   OP(XKB_KEY_1, Key_1) \
   OP(XKB_KEY_2, Key_2) \
   OP(XKB_KEY_3, Key_3) \
   OP(XKB_KEY_4, Key_4) \
   OP(XKB_KEY_5, Key_5) \
   OP(XKB_KEY_6, Key_6) \
   OP(XKB_KEY_7, Key_7) \
   OP(XKB_KEY_8, Key_8) \
   OP(XKB_KEY_9, Key_9) \
   OP(XKB_KEY_Alt_L, Key_LeftAlt) /* XKB_KEY_Alt_L, Left alt  */ \
   OP(XKB_KEY_Alt_R, Key_RightAlt) /* XKB_KEY_Alt_R, Right alt  */ \
   OP(XKB_KEY_BackSpace, Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP(XKB_KEY_Break, LCTRL(Key_Pause)) /* XKB_KEY_Break */ \
   OP(XKB_KEY_Byelorussian_SHORTU, LSHIFT(Key_O)) \
   OP(XKB_KEY_Byelorussian_shortu, Key_O) \
   OP(XKB_KEY_Caps_Lock, Key_CapsLock) /* XKB_KEY_Caps_Lock, Caps lock  */ \
   OP(XKB_KEY_Control_L, Key_LeftControl) /* XKB_KEY_Control_L, Left control  */ \
   OP(XKB_KEY_Control_R, Key_RightControl) /* XKB_KEY_Control_R, Right control  */ \
   OP(XKB_KEY_Cyrillic_A, LSHIFT(Key_F)) \
   OP(XKB_KEY_Cyrillic_BE, LSHIFT(Key_Comma)) \
   OP(XKB_KEY_Cyrillic_CHE, LSHIFT(Key_X)) \
   OP(XKB_KEY_Cyrillic_DE, LSHIFT(Key_L)) \
   OP(XKB_KEY_Cyrillic_E, LSHIFT(Key_Quote)) \
   OP(XKB_KEY_Cyrillic_EF, LSHIFT(Key_A)) \
   OP(XKB_KEY_Cyrillic_EL, LSHIFT(Key_K)) \
   OP(XKB_KEY_Cyrillic_EM, LSHIFT(Key_V)) \
   OP(XKB_KEY_Cyrillic_EN, LSHIFT(Key_Y)) \
   OP(XKB_KEY_Cyrillic_ER, LSHIFT(Key_H)) \
   OP(XKB_KEY_Cyrillic_ES, LSHIFT(Key_C)) \
   OP(XKB_KEY_Cyrillic_GHE, LSHIFT(Key_U)) \
   OP(XKB_KEY_Cyrillic_GHE_bar, LSHIFT(Key_Minus)) \
   OP(XKB_KEY_Cyrillic_HA, LSHIFT(Key_LeftBracket)) \
   OP(XKB_KEY_Cyrillic_HARDSIGN, LSHIFT(Key_RightBracket)) \
   OP(XKB_KEY_Cyrillic_HA_descender, LSHIFT(Key_Equals)) \
   OP(XKB_KEY_Cyrillic_I, LSHIFT(Key_B)) \
   OP(XKB_KEY_Cyrillic_IE, LSHIFT(Key_T)) \
   OP(XKB_KEY_Cyrillic_IO, LSHIFT(Key_Backtick)) \
   OP(XKB_KEY_Cyrillic_KA, LSHIFT(Key_R)) \
   OP(XKB_KEY_Cyrillic_KA_descender, LSHIFT(Key_S)) \
   OP(XKB_KEY_Cyrillic_O, LSHIFT(Key_J)) \
   OP(XKB_KEY_Cyrillic_PE, LSHIFT(Key_G)) \
   OP(XKB_KEY_Cyrillic_SHA, LSHIFT(Key_I)) \
   OP(XKB_KEY_Cyrillic_SHORTI, LSHIFT(Key_Q)) \
   OP(XKB_KEY_Cyrillic_SOFTSIGN, LSHIFT(Key_M)) \
   OP(XKB_KEY_Cyrillic_TE, LSHIFT(Key_N)) \
   OP(XKB_KEY_Cyrillic_TSE, LSHIFT(Key_W)) \
   OP(XKB_KEY_Cyrillic_U, LSHIFT(Key_E)) \
   OP(XKB_KEY_Cyrillic_VE, LSHIFT(Key_D)) \
   OP(XKB_KEY_Cyrillic_YA, LSHIFT(Key_Z)) \
   OP(XKB_KEY_Cyrillic_YU, LSHIFT(Key_Period)) \
   OP(XKB_KEY_Cyrillic_ZE, LSHIFT(Key_P)) \
   OP(XKB_KEY_Cyrillic_ZHE, LSHIFT(Key_Semicolon)) \
   OP(XKB_KEY_Cyrillic_a, Key_F) \
   OP(XKB_KEY_Cyrillic_be, Key_Comma) \
   OP(XKB_KEY_Cyrillic_che, Key_X) \
   OP(XKB_KEY_Cyrillic_de, Key_L) \
   OP(XKB_KEY_Cyrillic_e, Key_Quote) \
   OP(XKB_KEY_Cyrillic_ef, Key_A) \
   OP(XKB_KEY_Cyrillic_el, Key_K) \
   OP(XKB_KEY_Cyrillic_em, Key_V) \
   OP(XKB_KEY_Cyrillic_en, Key_Y) \
   OP(XKB_KEY_Cyrillic_er, Key_H) \
   OP(XKB_KEY_Cyrillic_es, Key_C) \
   OP(XKB_KEY_Cyrillic_ghe, Key_U) \
   OP(XKB_KEY_Cyrillic_ghe_bar, Key_Minus) \
   OP(XKB_KEY_Cyrillic_ha, Key_LeftBracket) \
   OP(XKB_KEY_Cyrillic_ha_descender, Key_Equals) \
   OP(XKB_KEY_Cyrillic_hardsign, Key_RightBracket) \
   OP(XKB_KEY_Cyrillic_i, Key_B) \
   OP(XKB_KEY_Cyrillic_ie, Key_T) \
   OP(XKB_KEY_Cyrillic_io, Key_Backtick) \
   OP(XKB_KEY_Cyrillic_ka, Key_R) \
   OP(XKB_KEY_Cyrillic_ka_descender, Key_S) \
   OP(XKB_KEY_Cyrillic_o, Key_J) \
   OP(XKB_KEY_Cyrillic_pe, Key_G) \
   OP(XKB_KEY_Cyrillic_sha, Key_I) \
   OP(XKB_KEY_Cyrillic_shorti, Key_Q) \
   OP(XKB_KEY_Cyrillic_softsign, Key_M) \
   OP(XKB_KEY_Cyrillic_te, Key_N) \
   OP(XKB_KEY_Cyrillic_tse, Key_W) \
   OP(XKB_KEY_Cyrillic_u, Key_E) \
   OP(XKB_KEY_Cyrillic_ve, Key_D) \
   OP(XKB_KEY_Cyrillic_ya, Key_Z) \
   OP(XKB_KEY_Cyrillic_yu, Key_Period) \
   OP(XKB_KEY_Cyrillic_ze, Key_P) \
   OP(XKB_KEY_Cyrillic_zhe, Key_Semicolon) \
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
   OP(XKB_KEY_Meta_R, LSHIFT(Key_RightAlt)) /* XKB_KEY_Meta_R, Right meta  */ \
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
   OP(XKB_KEY_asterisk, LSHIFT(Key_8)) \
   OP(XKB_KEY_backslash, Key_NonUsPound) \
   OP(XKB_KEY_bar, LSHIFT(Key_NonUsPound)) \
   OP(XKB_KEY_colon, LSHIFT(Key_6)) \
   OP(XKB_KEY_comma, LSHIFT(Key_Slash)) \
   OP(XKB_KEY_exclam, LSHIFT(Key_1)) \
   OP(XKB_KEY_numerosign, LSHIFT(Key_3)) \
   OP(XKB_KEY_parenleft, LSHIFT(Key_9)) \
   OP(XKB_KEY_parenright, LSHIFT(Key_0)) \
   OP(XKB_KEY_percent, LSHIFT(Key_5)) \
   OP(XKB_KEY_period, Key_Slash) \
   OP(XKB_KEY_question, LSHIFT(Key_7)) \
   OP(XKB_KEY_quotedbl, LSHIFT(Key_2)) \
   OP(XKB_KEY_semicolon, LSHIFT(Key_4)) \
   OP(XKB_KEY_slash, Key_NonUsBackslashAndPipe) \
   OP(XKB_KEY_space, Key_Spacebar) \


namespace kaleidoscope {
namespace host_keymap {
namespace linux {
namespace uz {
namespace standard {

HOST_KEYMAP_LINUX(
  _HOST_KEYMAP_ASCII,
  _HOST_KEYMAP_UNICODE,
  _HOST_KEYMAP_NON_PRINTABLE
)

} // namespace standard
} // namespace uz
} // namespace linux
} // namespace host_keymap
} // namespace kaleidoscope

#undef _HOST_KEYMAP_ASCII
#undef _HOST_KEYMAP_UNICODE
#undef _HOST_KEYMAP_NON_PRINTABLE

