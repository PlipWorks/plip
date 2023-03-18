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
#define PRODUCT_ID      0x414F
#define DEVICE_VER		0x0000
#define MANUFACTURER    PLIP Works
#define PRODUCT         Adélie Ortho
#define DESCRIPTION     Adélie Ortho

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 15

#define MATRIX_ROW_PINS { C5, D2, D1, D0 }
#define MATRIX_COL_PINS { D3, D4, D5, D6, B0, B1, B2, B3, B4, B5, B6, B7, C7, C6, C2 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
