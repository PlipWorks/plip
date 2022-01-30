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
#define PRODUCT_ID      0x0029
#define DEVICE_VER		  0x0000
#define MANUFACTURER    PLIP Works
#define PRODUCT         Beta 28

#define MATRIX_ROWS 3
#define MATRIX_COLS 10

#define MATRIX_ROW_PINS { D3, D4, D5 }
#define MATRIX_COL_PINS { D2, D1, D0, C2, B3, B2, B1, B0, D6, D7 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define COMBO_COUNT 35
#define COMBO_TERM 35

/* RGB default settings */
// #define RGBLIGHT_VAL_STEP 19
// #define RGBLIGHT_LIMIT_VAL 190
// #define RGB_DEFAULT_VAL 0

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
