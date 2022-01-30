/* Copyright 2021 PLIP Works
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

#define	_BASE 0
#define _LMODS 1
#define _RMODS 2
#define	_ARROWS 3
#define _NUM 4
#define _PUNC 5

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT(
		KC_Q, KC_W, KC_E, KC_R, KC_U, KC_I, KC_O, KC_P,
		KC_A, KC_S, KC_D, KC_F, KC_J, KC_K, KC_L, KC_ENTER,
		KC_Z, KC_X, KC_C, KC_V, KC_N, KC_M, KC_COMMA, KC_DOT
  ),
	[_LMODS] = LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______,
		KC_LSHIFT, _______, _______, _______, _______, _______, _______, _______,
		_______, KC_LCTRL, KC_LGUI, KC_LALT, _______, _______, _______, _______
  ),
	[_RMODS] = LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, KC_RSHIFT,
		_______, _______, _______, _______, KC_RALT, KC_RGUI, KC_RCTRL, _______
  ),
	[_ARROWS] = LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, KC_UP, _______,
		_______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT
	),
	[_NUM] = LAYOUT(
		KC_1, KC_2, KC_3, KC_4, KC_7, KC_8, KC_9, KC_0,
		_______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______
	),
	[_PUNC] = LAYOUT(
		_______, _______, _______, _______, RGB_TOG, KC_LBRACKET, KC_RBRACKET, KC_BSLASH,
		_______, _______, _______, RGB_SAI, RGB_VAI, RGB_HUI, KC_SCOLON, KC_QUOTE,
		_______, _______, _______, RGB_SAD, RGB_VAD, RGB_HUD, RGB_MODE_FORWARD, KC_SLASH
	),
};
