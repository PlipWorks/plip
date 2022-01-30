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

enum combos {
	//base layer combos
	CB_T,
	CB_Y,
	CB_G,
	CB_H,
	CB_B,
	CB_SPACE,
	CB_ESC,
	CB_BSPACE,
	CB_RSHIFT, //switch Rshift and enter again
	CB_LSHIFT,
	CB_TAB,
	CB_LAYER_CLR,
	CB_UNDO,
	CB_COPY,
	CB_PASTE,
	CB_CUT,
	CB_SELECT_ALL,
	CB_SAVE,
		//layer toggles
	CB_LMODS_ON,
	CB_RMODS_ON,
	CB_ARROWS_ON,
	CB_NUM_ON,

	//left modifier layer combos
		//layer toggles
	CB_LMODS_OFF,

	//right modifier layer combos
		//layer toggles
	CB_RMODS_OFF,
	CB_RMODS_TO_ARROW_ON,

	//arrow layer combos
		//layer toggles
	CB_ARROWS_OFF,
	CB_ARROWS_TO_RMODS_ON,

	//number layer combos
	CB_MINUS,
	CB_EQUAL,
	CB_NUM_BSPACE,
	CB_5,
	CB_6,
	CB_NUM_LAYER_CLR,
		//layer toggles
	CB_NUM_OFF,

	//punctuation layer combos
		//layer toggles
	CB_PUNC_TOG
};

//base layer combos
const uint16_t PROGMEM t_combo[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM y_combo[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM g_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM h_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM b_combo[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM space_combo[] = {KC_N, KC_M, COMBO_END};
const uint16_t PROGMEM esc_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM bspace_combo[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM rshift_combo[] = {KC_L, KC_ENTER, COMBO_END};
const uint16_t PROGMEM lshift_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM tab_combo[] = {KC_Q, KC_E, COMBO_END};
const uint16_t PROGMEM layer_clear_combo[] = {KC_Q, KC_P, COMBO_END};
const uint16_t PROGMEM undo_combo[] = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM copy_combo[] = {KC_Z, KC_C, COMBO_END};
const uint16_t PROGMEM paste_combo[] = {KC_Z, KC_V, COMBO_END};
const uint16_t PROGMEM cut_combo[] = {KC_X, KC_V, COMBO_END};
const uint16_t PROGMEM select_all_combo[] = {KC_A, KC_C, COMBO_END};
const uint16_t PROGMEM save_combo[] = {KC_S, KC_V, COMBO_END};
	//layer toggles
const uint16_t PROGMEM lmods_on_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM rmods_on_combo[] = {KC_M, KC_COMMA, COMBO_END};
const uint16_t PROGMEM arrows_on_combo[] = {KC_M, KC_L, KC_DOT, COMBO_END};
const uint16_t PROGMEM num_on_combo[] = {KC_W, KC_E, COMBO_END};

//left modifier layer combos
	//layer toggles
const uint16_t PROGMEM lmods_off_combo[] = {KC_LCTRL, KC_LGUI, COMBO_END};

//right modifier layer combos
	//layer toggles
const uint16_t PROGMEM rmods_off_combo[] = {KC_RGUI, KC_RCTRL, COMBO_END};
const uint16_t PROGMEM rmods_to_arrows_on_combo[] = {KC_RGUI, KC_L, KC_DOT, COMBO_END};

//arrow layer combos
	//layer toggles
const uint16_t PROGMEM arrows_off_combo[] = {KC_LEFT, KC_UP, KC_RIGHT, COMBO_END};
const uint16_t PROGMEM arrows_to_rmods_on_combo[] = {KC_LEFT, KC_DOWN, COMBO_END};

//number layer combos
const uint16_t PROGMEM minus_combo[] = {KC_8, KC_9, COMBO_END};
const uint16_t PROGMEM equal_combo[] = {KC_8, KC_0, COMBO_END};
const uint16_t PROGMEM num_bspace_combo[] = {KC_9, KC_0, COMBO_END};
const uint16_t PROGMEM five_combo[] = {KC_3, KC_4, COMBO_END};
const uint16_t PROGMEM six_combo[] = {KC_7, KC_8, COMBO_END};
const uint16_t PROGMEM num_layer_clear_combo[] = {KC_1, KC_0, COMBO_END};
	//layer toggles
const uint16_t PROGMEM num_off_combo[] = {KC_2, KC_3, COMBO_END};

//punctuation layer combos
	//layer toggles
const uint16_t PROGMEM punc_tog_combo[] = {KC_S, KC_D, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
	//base layer combos
  [CB_T] = COMBO(t_combo, KC_T),
  [CB_Y] = COMBO(y_combo, KC_Y),
	[CB_G] = COMBO(g_combo, KC_G),
	[CB_H] = COMBO(h_combo, KC_H),
	[CB_B] = COMBO(b_combo, KC_B),
	[CB_SPACE] = COMBO(space_combo, KC_SPACE),
	[CB_ESC] = COMBO(esc_combo, KC_ESCAPE),
	[CB_BSPACE] = COMBO(bspace_combo, KC_BSPACE),
	[CB_RSHIFT] = COMBO_ACTION(rshift_combo),
	[CB_LSHIFT] = COMBO_ACTION(lshift_combo),
	[CB_TAB] = COMBO(tab_combo, KC_TAB),
	[CB_LAYER_CLR] = COMBO_ACTION(layer_clear_combo),
	[CB_UNDO] = COMBO_ACTION(undo_combo),
	[CB_COPY] = COMBO_ACTION(copy_combo),
	[CB_PASTE] = COMBO_ACTION(paste_combo),
	[CB_CUT] = COMBO_ACTION(cut_combo),
	[CB_SELECT_ALL] = COMBO_ACTION(select_all_combo),
	[CB_SAVE] = COMBO_ACTION(save_combo),
	[CB_LMODS_ON] = COMBO_ACTION(lmods_on_combo),
	[CB_RMODS_ON] = COMBO_ACTION(rmods_on_combo),
	[CB_ARROWS_ON] = COMBO_ACTION(arrows_on_combo),
	[CB_NUM_ON] = COMBO_ACTION(num_on_combo),

	//left modifier layer combos
	[CB_LMODS_OFF] = COMBO_ACTION(lmods_off_combo),

	//right modifier layer combos
	[CB_RMODS_OFF] = COMBO_ACTION(rmods_off_combo),
	[CB_RMODS_TO_ARROW_ON] = COMBO_ACTION(rmods_to_arrows_on_combo),

	//arrow layer combos
	[CB_ARROWS_OFF] = COMBO_ACTION(arrows_off_combo),
	[CB_ARROWS_TO_RMODS_ON] = COMBO_ACTION(arrows_to_rmods_on_combo),

	//number layer combos
	[CB_MINUS] = COMBO(minus_combo, KC_MINUS),
	[CB_EQUAL] = COMBO(equal_combo, KC_EQUAL),
	[CB_NUM_BSPACE] = COMBO(num_bspace_combo, KC_BSPACE),
	[CB_5] = COMBO(five_combo, KC_5),
	[CB_6] = COMBO(six_combo, KC_6),
	[CB_NUM_LAYER_CLR] = COMBO_ACTION(num_layer_clear_combo),
	[CB_NUM_OFF] = COMBO_ACTION(num_off_combo),

	//punctuation layer combos
	[CB_PUNC_TOG] = COMBO_ACTION(punc_tog_combo)
};

void process_combo_event(uint16_t combo_index, bool pressed) {
	switch(combo_index) {
		//base layer combos
		case CB_RSHIFT:
      if (pressed) {
				register_code(KC_RSHIFT);
			} else {
				unregister_code(KC_RSHIFT);
			}
      break;
		case CB_LSHIFT:
      if (pressed) {
				register_code(KC_LSHIFT);
			} else {
				unregister_code(KC_LSHIFT);
			}
      break;
		case CB_LAYER_CLR:
      if (pressed) {
				layer_clear(); //clear all layers
			}
      break;
		case CB_UNDO:
      if (pressed) {
				tap_code16(LGUI(KC_Z)); //undo
			}
      break;
		case CB_COPY:
      if (pressed) {
				tap_code16(LGUI(KC_C)); //copy
			}
      break;
		case CB_PASTE:
      if (pressed) {
				tap_code16(LGUI(KC_V)); //paste
			}
      break;
		case CB_CUT:
      if (pressed) {
				tap_code16(LGUI(KC_X)); //cut
			}
      break;
		case CB_SELECT_ALL:
      if (pressed) {
				tap_code16(LGUI(KC_A)); //select all
			}
      break;
		case CB_SAVE:
      if (pressed) {
				tap_code16(LGUI(KC_S)); //save
			}
      break;
		case CB_LMODS_ON:
			if (pressed) {
				layer_on(_LMODS); //turn on left modifier layer
			}
			break;
		case CB_RMODS_ON:
      if (pressed) {
				layer_on(_RMODS); //turn on right modifier layer
			}
      break;
    case CB_ARROWS_ON:
      if (pressed) {
				layer_on(_ARROWS); //turn on arrow layer
			}
      break;
		case CB_NUM_ON:
			if (pressed) {
				layer_on(_NUM); //turn on number layer
				layer_on(_LMODS); //turn on left modifier layer
				layer_on(_RMODS); //turn on right modifier layer
			}
			break;

		//left modifier combos
		case CB_LMODS_OFF:
			if (pressed) {
				layer_off(_LMODS); //turn off left modifier layer
			}
			break;

		//right modifier combos
		case CB_RMODS_OFF:
			if (pressed) {
				layer_off(_RMODS); //turn off right modifier layer
			}
			break;
		case CB_RMODS_TO_ARROW_ON:
			if (pressed) {
				layer_off(_RMODS); //turn off right modifier layer
				layer_on(_ARROWS); //turn on arrow layer
			}
			break;

		//arrow layer combos
		case CB_ARROWS_OFF:
      if (pressed) {
				layer_off(_ARROWS); //turn off arrow layer
			}
      break;
		case CB_ARROWS_TO_RMODS_ON:
			if (pressed) {
				layer_off(_ARROWS); //turn off arrow layer
				layer_on(_RMODS); //turn on right modifier layer
			}
			break;

		//number layer combos
		case CB_NUM_LAYER_CLR:
      if (pressed) {
				layer_clear(); //clear all layers
			}
      break;
		case CB_NUM_OFF:
      if (pressed) {
				layer_off(_NUM); //turn off number layer
				layer_off(_LMODS); //turn off left modifier layer
				layer_off(_RMODS); //turn off right modifier layer
			}
      break;

		//punctuation layer combos
		case CB_PUNC_TOG:
      if (pressed) {
				layer_on(_PUNC); //turn on punctuation layer
				layer_on(_LMODS); //turn on left modifier layer
			} else {
				layer_off(_PUNC); //turn off punctuation layer
				layer_off(_LMODS); //turn off left modifier layer
			}
      break;
  }
}

// enum custom_keycodes {
//     LYR_CLR = SAFE_RANGE,
// };
//
// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//     case LYR_CLR:
//         if (record->event.pressed) {
//             layer_clear();
//         } else {
//             // when keycode is released
//         }
//         break;
//     return true;
// };

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
