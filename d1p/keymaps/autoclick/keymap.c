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

bool is_active = false;
uint32_t prev_timer = 0;
uint32_t curr_timer = 0;
uint32_t period = 300000;
int val = 100;

enum custom_keycodes {
    TIMER = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case TIMER:
        if (record->event.pressed) {

        } else {
          is_active = !is_active;
          if (is_active) {
            rgblight_sethsv_noeeprom(0, 255, val);
          } else {
            rgblight_sethsv_noeeprom(0, 255, 0);
          }
          prev_timer = timer_read() - (period + 1000);
        }
        break;
    }
    return true;
};

void matrix_scan_user(void) {
  if (is_active) {
    curr_timer = timer_read();
    if (curr_timer - prev_timer > period) {
      rgblight_sethsv_noeeprom(240, 255, val);
      tap_code(KC_MS_BTN1);
      SEND_STRING(SS_DELAY(500));
      rgblight_sethsv_noeeprom(0, 255, val);
      prev_timer = curr_timer;
    }
  }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = {
        {TIMER},
        // ...
    },
};
