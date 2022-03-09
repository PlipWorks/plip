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

enum custom_keycodes {
  MUTE = SAFE_RANGE,
};

bool mute = true; //start the meeting with mic muted

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case MUTE:
        if (record->event.pressed) {
          if (mute) {
            register_code(KC_LCTL);
            tap_code(KC_D);
            unregister_code(KC_LCTL);
            mute = false;
          }
        } else {
          if (!mute) {
            register_code(KC_LCTL);
            tap_code(KC_D);
            unregister_code(KC_LCTL);
            mute = true;
          }
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = {
    {MUTE},
  }
};
