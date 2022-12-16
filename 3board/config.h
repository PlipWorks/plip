/* Copyright 2022 PLIP Works
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
#define PRODUCT_ID      0x3342
#define DEVICE_VER		0x0000
#define MANUFACTURER    PLIP Works
#define PRODUCT         3board

#define MATRIX_ROWS 1
#define MATRIX_COLS 3

// #define MATRIX_ROW_PINS { B7 }
// #define MATRIX_COL_PINS { C5, D5, D4 }

#define DIRECT_PINS { { C5, D5, D4 } }

/* COL2ROW or ROW2COL */
// #define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
