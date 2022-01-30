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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		KC_F6, KC_F1, KC_KP_EQUAL, KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS,
		KC_F7, KC_F2, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_PLUS,
		KC_F8, KC_F3, KC_KP_4, KC_KP_5, KC_KP_6,
		KC_F9, KC_F4, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_ENTER,
		KC_F10, KC_F5, KC_KP_0, 				KC_KP_DOT
  ),

	[1] = LAYOUT(
		_______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______,
		_______, _______, _______,					_______
  ),

	[2] = LAYOUT(
		_______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______,
		_______, _______, _______,					_______
  ),

	[3] = LAYOUT(
		_______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______,
		_______, _______, _______,					_______
  )
};
