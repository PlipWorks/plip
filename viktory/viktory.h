/* Copyright 2023 PLIP Works
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

#include "quantum.h"

#define LAYOUT( \
    K00,                K03, K02, K04, K05, K06, K07, K08, K09, K0a, K0b, K0c, K0d, K0e, K0f, K0g, K0h, K0i, K1i,      K0j, K0k, K0l,           \
         K10, K11, K12, K13,      K14, K15, K16, K17, K18, K19, K1a, K1b, K1c, K1d, K1e, K1f, K1g, K1h,                K1j, K1k, K1l, K1m, K1n, \
         K20, K21, K22, K23,      K24, K25, K26, K27, K28, K29, K2a, K2b, K2c, K2d, K2e, K2f,      K2h,                K2j, K2k, K2l, K2m, K2n, \
         K30, K31, K32, K33,      K34, K35, K36, K37, K38, K39, K3a, K3b, K3c, K3d, K3e,      K3g,           K2i,      K3j, K3k, K3l, K3m, K3n, \
         K40, K41, K42, K43,      K44, K45, K46, K47, K48,           K4b,      K4d, K4e, K4f, K4g,      K4h, K3i, K4i, K4j, K4k, K4l, K4m, K4n  \
) { \
    { K00, KC_NO, K02, K03, K04, K05, K06, K07, K08, K09,   K0a,   K0b, K0c,   K0d, K0e, K0f,   K0g,   K0h,   K0i, K0j, K0k, K0l, KC_NO, KC_NO }, \
    { K10, K11,   K12, K13, K14, K15, K16, K17, K18, K19,   K1a,   K1b, K1c,   K1d, K1e, K1f,   K1g,   K1h,   K1i, K1j, K1k, K1l, K1m,   K1n   }, \
    { K20, K21,   K22, K23, K24, K25, K26, K27, K28, K29,   K2a,   K2b, K2c,   K2d, K2e, K2f,   KC_NO, K2h,   K2i, K2j, K2k, K2l, K2m,   K2n   }, \
    { K30, K31,   K32, K33, K34, K35, K36, K37, K38, K39,   K3a,   K3b, K3c,   K3d, K3e, KC_NO, K3g,   KC_NO, K3i, K3j, K3k, K3l, K3m,   K3n   }, \
    { K40, K41,   K42, K43, K44, K45, K46, K47, K48, KC_NO, KC_NO, K4b, KC_NO, K4d, K4e, K4f,   K4g,   K4h,   K4i, K4j, K4k, K4l, K4m,   K4n   }  \
}
