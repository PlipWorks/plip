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
#pragma once

#include "config_common.h"

/* USB Device descriptor parameter
As long as VID doesn't interfere with existing USB VID, then you're fine.*/
#define VENDOR_ID       0x5057 // PW == PLIP Works
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0000
#define MANUFACTURER    PLIP Works
#define PRODUCT         D1P
#define DESCRIPTION     D1P

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 1

#define MATRIX_ROW_PINS { B7 }
#define MATRIX_COL_PINS { D2 }
#define UNUSED_PINS

#define RGB_DI_PIN C5
#undef RGBLED_NUM
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
// #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_MOOD + 2
#define RGBLED_NUM 2

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* For iOS compatibility */
#define USB_MAX_POWER_CONSUMPTION 100

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#define UNICODE_SELECTED_MODES UC_WINC

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE
