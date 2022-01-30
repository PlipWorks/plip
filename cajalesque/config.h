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

/* USB Device descriptor parameter */
#define VENDOR_ID       0x5057
#define PRODUCT_ID      0x0027
#define DEVICE_VER		  0x0000
#define MANUFACTURER    PLIP Works
#define PRODUCT         Cajalesque

#define MATRIX_ROWS 5
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS { D0, D4, C6, D7, E6 }
#define MATRIX_COL_PINS { D1, F5, F6, F7, B1, B3 }
#define UNUSED_PINS

#define RGB_DI_PIN F4
#define DRIVER_LED_TOTAL 27
// #define RGBLED_NUM 27

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* RGB default settings */
// #define RGBLIGHT_VAL_STEP 19
// #define RGBLIGHT_LIMIT_VAL 190
// #define RGB_DEFAULT_VAL 0

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
