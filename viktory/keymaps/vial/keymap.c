/* Copyright 2023 PLIP Works
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

enum layer_names { _BASE, _FIRST };

const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {95, 1, HSV_GREEN}
);

const rgblight_segment_t PROGMEM my_numlock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {36, 1, HSV_GREEN},
    {59, 1, HSV_GREEN}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_capslock_layer,
    my_numlock_layer
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, led_state.caps_lock);
	rgblight_set_layer_state(1, led_state.num_lock);
    return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT(
		         KC_MUTE,                   RGB_TOG,  RGB_M_T,  KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_SCRL, KC_PAUS,          LCTL(KC_0),
		                                    RGB_HUD,  RGB_HUI,  _______,          KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_F21,  KC_F12,  KC_F23,  KC_F24,  _______, _______, _______,
		KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS, RGB_SAD,  RGB_SAI,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_INS,  KC_HOME, KC_PGUP, KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
		KC_KP_7, KC_KP_8, KC_KP_9, KC_PPLS, RGB_M_P,  RGB_M_B,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,  KC_END,  KC_PGDN, KC_KP_7, KC_KP_8, KC_KP_9, KC_PPLS,
		KC_KP_4, KC_KP_5, KC_KP_6,          RGB_M_R,  RGB_M_SW, KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,                             KC_KP_4, KC_KP_5, KC_KP_6,
		KC_KP_1, KC_KP_2, KC_KP_3, KC_PENT, RGB_M_SN, RGB_M_K,  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,                   KC_UP,            KC_KP_1, KC_KP_2, KC_KP_3, KC_PENT,
		KC_KP_0,          KC_PDOT,          RGB_M_X,  RGB_M_G,  KC_LCTL, KC_LGUI, KC_LALT,                   LT(_FIRST, KC_SPC),                 KC_LALT, KC_RGUI,          KC_APP,  KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_KP_0,          KC_PDOT
  ),
	[_FIRST] = LAYOUT(
		         _______,                   _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
		                                    _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,                            _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,                   _______,          _______, _______, _______, _______,
		_______,          _______,          _______, _______, _______, _______, _______,                   _______,                            _______, _______,          _______, _______, _______, _______, _______, _______,          _______
  )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_BASE] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(LCTL(KC_MINS), LCTL(KC_EQL)) },
    [_FIRST] =  { ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(RGB_RMOD, RGB_MOD) }
};
#endif