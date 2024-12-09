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
#include <string.h>

int code = -1;
bool pressed = false;

bool is_new_beep = true; //triggers a new signal
uint16_t beep_timer = 0;

bool read_seq = false; //triggers reading of the sequence
char seq[9] = ""; //stores the sequence for 1 character
uint8_t seq_taps = 0; //stores the current length of the sequence
uint16_t seq_timer = 0;

bool repeat_seq = false;
uint16_t repeat_timer = 0;

int wait_beep = 250;
int wait_repeat = 250;
int wait_seq = 1000;
int repeat_period = 250;

bool shift_active = false;
bool ctrl_active = false;
bool alt_active = false;
bool visible_active = true;

void morseToKC(char morse[]);

enum custom_keycodes {
    MORSE = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case MORSE:
    if (record->event.pressed) {
      // when keycode is pressed
      pressed = true;
      beep_timer = timer_read();
      seq_taps++;
    } else {
      // when keycode is released
      pressed = false;
      read_seq = true;

      if (repeat_seq) {
        strcpy(seq, "");
        seq_taps = 0;
        repeat_seq = false;
      }

      if (seq_taps <= 8) {
        switch (code) {
          case 0:
            strcat(seq, ".");
            break;
          case 1:
            strcat(seq, "-");
            break;
        }
      }

      code = -1;

    }
    break;
  }
  return true;
};

void matrix_scan_user(void) {
  if (pressed) {
    uint16_t t_beep = timer_elapsed(beep_timer);

    int temp_code = code;

    if (t_beep < wait_beep) {
      code = 0;
    } else if (t_beep >= wait_beep && t_beep < wait_beep + wait_repeat) {
      code = 1;
    } else {
      code = 2;
    }

    if (temp_code != code) {
      switch (code) {
        case 0:
          if (visible_active) {
            SEND_STRING(".");
          }
          break;
        case 1:
          if (visible_active) {
            tap_code(KC_BSPC);
            SEND_STRING("-");
          }
          break;
        case 2:
          if (visible_active) {
            tap_code(KC_BSPC);
            seq_taps--;
            for (int i = 0; i < seq_taps; i++) {
              tap_code(KC_BSPC);
            }
          }
          repeat_seq = true;
          repeat_timer = timer_read();
          break;
      }
    }
    seq_timer = timer_read();

    if (repeat_seq && timer_elapsed(repeat_timer) > repeat_period) {
      morseToKC(seq);
      repeat_timer = timer_read();
    }
  } else {
    if (read_seq && timer_elapsed(seq_timer) > wait_seq) {
      if (visible_active) {
        for (int i = 0; i < seq_taps; i++) {
          tap_code(KC_BSPC);
        }
      }

      if (seq_taps <= 8) {
        morseToKC(seq);
      }

      strcpy(seq, "");
      seq_taps = 0;
      read_seq = false;
    }
  }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = {
    {MORSE},
  },
};

void morseToKC(char morse[]) {
  //alphabet
  //////////////////////////////////////////////////////////////////////////////
  if(strcmp(morse, ".-") == 0) {tap_code(KC_A);}
  else if(strcmp(morse, "-...") == 0) {tap_code(KC_B);}
  else if(strcmp(morse, "-.-.") == 0) {tap_code(KC_C);}
  else if(strcmp(morse, "-..") == 0) {tap_code(KC_D);}
  else if(strcmp(morse, ".") == 0) {tap_code(KC_E);}
  else if(strcmp(morse, "..-.") == 0) {tap_code(KC_F);}
  else if(strcmp(morse, "--.") == 0) {tap_code(KC_G);}
  else if(strcmp(morse, "....") == 0) {tap_code(KC_H);}
  else if(strcmp(morse, "..") == 0) {tap_code(KC_I);}
  else if(strcmp(morse, ".---") == 0) {tap_code(KC_J);}
  else if(strcmp(morse, "-.-") == 0) {tap_code(KC_K);}
  else if(strcmp(morse, ".-..") == 0) {tap_code(KC_L);}
  else if(strcmp(morse, "--") == 0) {tap_code(KC_M);}
  else if(strcmp(morse, "-.") == 0) {tap_code(KC_N);}
  else if(strcmp(morse, "---") == 0) {tap_code(KC_O);}
  else if(strcmp(morse, ".--.") == 0) {tap_code(KC_P);}
  else if(strcmp(morse, "--.-") == 0) {tap_code(KC_Q);}
  else if(strcmp(morse, ".-.") == 0) {tap_code(KC_R);}
  else if(strcmp(morse, "...") == 0) {tap_code(KC_S);}
  else if(strcmp(morse, "-") == 0) {tap_code(KC_T);}
  else if(strcmp(morse, "..-") == 0) {tap_code(KC_U);}
  else if(strcmp(morse, "...-") == 0) {tap_code(KC_V);}
  else if(strcmp(morse, ".--") == 0) {tap_code(KC_W);}
  else if(strcmp(morse, "-..-") == 0) {tap_code(KC_X);}
  else if(strcmp(morse, "-.--") == 0) {tap_code(KC_Y);}
  else if(strcmp(morse, "--..") == 0) {tap_code(KC_Z);}

  //numbers
  //////////////////////////////////////////////////////////////////////////////
  else if(strcmp(morse, ".----") == 0) {tap_code(KC_1);}
  else if(strcmp(morse, "..---") == 0) {tap_code(KC_2);}
  else if(strcmp(morse, "...--") == 0) {tap_code(KC_3);}
  else if(strcmp(morse, "....-") == 0) {tap_code(KC_4);}
  else if(strcmp(morse, ".....") == 0) {tap_code(KC_5);}
  else if(strcmp(morse, "-....") == 0) {tap_code(KC_6);}
  else if(strcmp(morse, "--...") == 0) {tap_code(KC_7);}
  else if(strcmp(morse, "---..") == 0) {tap_code(KC_8);}
  else if(strcmp(morse, "----.") == 0) {tap_code(KC_9);}
  else if(strcmp(morse, "-----") == 0) {tap_code(KC_0);}

  //math + coding symbols
  //////////////////////////////////////////////////////////////////////////////
  else if(strcmp(morse, "-...-") == 0) {tap_code(KC_EQL);}
  else if(strcmp(morse, "-.--.") == 0) { //+
    register_code(KC_LSFT);
    tap_code(KC_EQUAL);
    unregister_code(KC_LSFT);
  }
  else if(strcmp(morse, "-.---") == 0) {tap_code(KC_MINS);}
  else if(strcmp(morse, ".-.--") == 0) { //*
    register_code(KC_LSFT);
    tap_code(KC_8);
    unregister_code(KC_LSFT);
  }
  else if(strcmp(morse, ".-..-") == 0) {tap_code(KC_SLSH);}
  else if(strcmp(morse, "--.--") == 0) {tap_code(KC_BSLS);}
  else if(strcmp(morse, "---.-") == 0) { //|
    register_code(KC_LSFT);
    tap_code(KC_BSLS);
    unregister_code(KC_LSFT);
  }
  else if(strcmp(morse, ".--..") == 0) { //(
    register_code(KC_LSFT);
    tap_code(KC_9);
    unregister_code(KC_LSFT);
  }
  else if(strcmp(morse, ".--.-") == 0) { //)
    register_code(KC_LSFT);
    tap_code(KC_0);
    unregister_code(KC_LSFT);
  }
  else if(strcmp(morse, "--.-.") == 0) { //{
    register_code(KC_LSFT);
    tap_code(KC_LBRC);
    unregister_code(KC_LSFT);
  }
  else if(strcmp(morse, "--..-") == 0) { //}
    register_code(KC_LSFT);
    tap_code(KC_RBRC);
    unregister_code(KC_LSFT);
  }
  else if(strcmp(morse, "-..-.") == 0) {tap_code(KC_LBRC);}
  else if(strcmp(morse, "-..--") == 0) {tap_code(KC_RBRC);}

  //punctuation
  //////////////////////////////////////////////////////////////////////////////
  else if(strcmp(morse, ".-.-.-") == 0) {tap_code(KC_DOT);}
  else if(strcmp(morse, "--..--") == 0) {tap_code(KC_COMM);}
  else if(strcmp(morse, "---...") == 0) { //:
    register_code(KC_LSFT);
    tap_code(KC_SCLN);
    unregister_code(KC_LSFT);
  }
  else if(strcmp(morse, "..-.-") == 0) {tap_code(KC_SCLN);}
  else if(strcmp(morse, "..--..") == 0) { //?
    register_code(KC_LSFT);
    tap_code(KC_SLASH);
    unregister_code(KC_LSFT);
  }
  else if(strcmp(morse, "..--.") == 0) { //!
    register_code(KC_LSFT);
    tap_code(KC_1);
    unregister_code(KC_LSFT);
  }
  else if(strcmp(morse, ".-..-.") == 0) { //"
    register_code(KC_LSFT);
    tap_code(KC_QUOT);
    unregister_code(KC_LSFT);
  }
  else if(strcmp(morse, ".----.") == 0) {tap_code(KC_QUOT);}

  //arrow keys
  //////////////////////////////////////////////////////////////////////////////
  else if(strcmp(morse, "..-..") == 0) {tap_code(KC_UP);}
  else if(strcmp(morse, ".-...") == 0) {tap_code(KC_LEFT);}
  else if(strcmp(morse, ".-.-.") == 0) {tap_code(KC_DOWN);}
  else if(strcmp(morse, "...-.") == 0) {tap_code(KC_RGHT);}

  //macros
  else if(strcmp(morse, "-.....") == 0) { //copy ctrl-c
    register_code(KC_LCTL);
    tap_code(KC_C);
    unregister_code(KC_LCTL);
  }
  else if(strcmp(morse, ".-....") == 0) { //cut ctrl-x
    register_code(KC_LCTL);
    tap_code(KC_X);
    unregister_code(KC_LCTL);
  }
  else if(strcmp(morse, "..-...") == 0) { //paste ctrl-v
    register_code(KC_LCTL);
    tap_code(KC_V);
    unregister_code(KC_LCTL);
  }
  else if(strcmp(morse, "...-..") == 0) { //undo ctrl-z
    register_code(KC_LCTL);
    tap_code(KC_Z);
    unregister_code(KC_LCTL);
  }
  else if(strcmp(morse, "....-.") == 0) { //redo ctrl-y
    register_code(KC_LCTL);
    tap_code(KC_Y);
    unregister_code(KC_LCTL);
  }
  else if(strcmp(morse, ".....-") == 0) { //save ctrl-s
    register_code(KC_LCTL);
    tap_code(KC_S);
    unregister_code(KC_LCTL);
  }

  //other
  //////////////////////////////////////////////////////////////////////////////
  else if(strcmp(morse, ".-.-") == 0) {tap_code(KC_ESC);}
  else if(strcmp(morse, "---.") == 0) {tap_code(KC_SPC);}
  else if(strcmp(morse, "----") == 0) {tap_code(KC_BSPC);}
  else if(strcmp(morse, ".---.") == 0) {tap_code(KC_ENT);}
  else if(strcmp(morse, "....--") == 0) {tap_code(KC_DEL);}

  //toggles
  //////////////////////////////////////////////////////////////////////////////
  else if(strcmp(morse, "..--") == 0) { //toggle shift
    if (shift_active) {
      unregister_code(KC_LSFT);
    } else {
      register_code(KC_LSFT);
    }
    shift_active = !shift_active;
  }
  else if(strcmp(morse, "-.-..") == 0) { //toggle ctrl
    if (ctrl_active) {
      unregister_code(KC_LCTL);
    } else {
      register_code(KC_LCTL);
    }
    ctrl_active = !ctrl_active;
  }
  else if(strcmp(morse, "-.-.-") == 0) { //toggle alt
    if (alt_active) {
      unregister_code(KC_LALT);
    } else {
      register_code(KC_LALT);
    }
    alt_active = !alt_active;
  }

  //speed + visibility control
  //////////////////////////////////////////////////////////////////////////////
  else if(strcmp(morse, "........") == 0) { //defaults to slower mode
    wait_beep = 250;
    wait_repeat = 250;
    wait_seq = 1000;
    repeat_period = 250;
  } else if(strcmp(morse, ".......-") == 0) { //faster
    wait_beep = 150;
    wait_repeat = 250;
    wait_seq = 250;
    repeat_period = 125;
  }
  else if(strcmp(morse, "-.......") == 0) {
    visible_active = !visible_active;
  }

  //RGB
  //////////////////////////////////////////////////////////////////////////////
  else if(strcmp(morse, "..-..-") == 0) {
    rgblight_toggle();
  }
  else if(strcmp(morse, "..-.-.") == 0) {
    if (rgblight_get_mode() == RGBLIGHT_MODE_STATIC_LIGHT) {
      rgblight_mode(RGBLIGHT_MODE_BREATHING + 1);
    } else if (rgblight_get_mode() == (RGBLIGHT_MODE_BREATHING + 1)) {
      rgblight_mode(RGBLIGHT_MODE_BREATHING + 3);
    } else if (rgblight_get_mode() == (RGBLIGHT_MODE_BREATHING + 3)) {
      rgblight_mode(RGBLIGHT_MODE_RAINBOW_MOOD + 2);
    } else if (rgblight_get_mode() == (RGBLIGHT_MODE_RAINBOW_MOOD + 2)) {
      rgblight_mode(RGBLIGHT_MODE_RAINBOW_SWIRL + 5);
    } else {
      rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
    }
  }
  else if(strcmp(morse, "..-.--") == 0) {
    if (rgblight_get_mode() == RGBLIGHT_MODE_STATIC_LIGHT) {
      rgblight_mode(RGBLIGHT_MODE_RAINBOW_SWIRL + 5);
    } else if (rgblight_get_mode() == (RGBLIGHT_MODE_RAINBOW_SWIRL + 5)) {
      rgblight_mode(RGBLIGHT_MODE_RAINBOW_MOOD + 2);
    } else if (rgblight_get_mode() == (RGBLIGHT_MODE_RAINBOW_MOOD + 2)) {
      rgblight_mode(RGBLIGHT_MODE_BREATHING + 3);
    } else if (rgblight_get_mode() == (RGBLIGHT_MODE_BREATHING + 3)) {
      rgblight_mode(RGBLIGHT_MODE_BREATHING + 1);
    } else {
      rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
    }
  }
  else if(strcmp(morse, "..---.") == 0) { //increase brightness
    rgblight_increase_val();
  }
  else if(strcmp(morse, "..----") == 0) { //decrease brightness
    rgblight_decrease_val();
  }
  else if(strcmp(morse, ".--..-") == 0) { //increment hue
    rgblight_increase_hue();
  }
  else if(strcmp(morse, ".--.-.") == 0) { //decrement hue
    rgblight_decrease_hue();
  }
  else if(strcmp(morse, "-...-.") == 0) { //increment saturation
    rgblight_increase_sat();
  }
  else if(strcmp(morse, "-...--") == 0) { //decrement saturation
    rgblight_decrease_sat();
  }

  //custom
  //////////////////////////////////////////////////////////////////////////////
  // else if(strcmp(morse, "morse code sequence goes here") == 0) {
  //   //stuff happens here
  // }

  else {tap_code(KC_NO);}
}
