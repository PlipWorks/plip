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
#define PRODUCT_ID      0x6C6D
#define DEVICE_VER		  0x0000
#define MANUFACTURER    PLIP Works
#define PRODUCT         Long Long Man

#define MATRIX_ROWS 5
#define MATRIX_COLS 24

#define MATRIX_ROW_PINS { B2, B3, C0, C1, C2 }
#define MATRIX_COL_PINS { E1, E0, D7, D6, D5, D4, D3, D2, D1, D0, F0, F1, F2, F3, F4, F5, F6, F7, A0, A1, A2, A3, A4, A5 }
#define UNUSED_PINS

#define ENCODERS_PAD_A { E6 }
#define ENCODERS_PAD_B { E7 }
#define ENCODER_DIRECTION_FLIP


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
