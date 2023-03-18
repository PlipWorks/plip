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
#define PRODUCT_ID      0x4B4F
#define DEVICE_VER		0x0000
#define MANUFACTURER    PLIP Works
#define PRODUCT         Kara Ortho

#define MATRIX_ROWS 5
#define MATRIX_COLS 13

#define MATRIX_ROW_PINS { C5, C4, D2, D1, D0 }
#define MATRIX_COL_PINS { C6, C7, B7, B6, B5, B4, B3, B0, D6, D5, D4, D3, C2 }
#define UNUSED_PINS

#define ENCODERS_PAD_A { B1 }
#define ENCODERS_PAD_B { B2 }
#define ENCODER_DIRECTION_FLIP

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
