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
#define PRODUCT_ID      0x776C
#define DEVICE_VER		  0x0000
#define MANUFACTURER    PLIP Works
#define PRODUCT         Wide Load

#define MATRIX_ROWS 4
#define MATRIX_COLS 26

#define MATRIX_ROW_PINS { D2, F0, C1, D4 }
#define MATRIX_COL_PINS { D3, D5, D6, D7, E0, E1, C0, C2, C3, C4, C5, C6, C7, A7, A6, A5, A4, A3, A2, A1, F6, F5, F4, F3, F2, F1 }
#define UNUSED_PINS

#define ENCODERS_PAD_A { A0 }
#define ENCODERS_PAD_B { F7 }
#define ENCODER_DIRECTION_FLIP


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
