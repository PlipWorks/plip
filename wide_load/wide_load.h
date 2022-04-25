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

#include "quantum.h"

#define LAYOUT( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0a, K0b, K0c, K0d, K0e, K0f, K0g, K0h, K0i, K0j,      K0l, K0m, K0n, K0o, K0p, \
         K11, K12, K13, K14, K15, K16, K17, K18, K19, K1a, K1b, K1c, K1d, K1e, K1f,      K1h,                K1l, K1m, K1n, K1o,      \
         K21, K22, K23, K24, K25, K26, K27, K28, K29, K2a, K2b, K2c, K2d, K2e,           K2h,      K2j,      K2l, K2m, K2n, K2o, K2p, \
         K31, K32, K33, K34, K35, K36,           K39,                K3d, K3e,      K3g, K3h, K3i, K3j, K3k, K3l, K3m, K3n, K3o       \
) { \
    { K00,   K01, K02, K03, K04, K05, K06, K07,   K08,   K09, K0a,   K0b,   K0c,   K0d, K0e, K0f,   K0g,   K0h, K0i,   K0j,   KC_NO, KC_NO, K0m, K0n, K0o, K0p   }, \
    { KC_NO, K11, K12, K13, K14, K15, K16, K17,   K18,   K19, K1a,   K1b,   K1c,   K1d, K1e, K1f,   KC_NO, K1h, KC_NO, KC_NO, KC_NO, KC_NO, K1m, K1n, K1o, KC_NO }, \
    { KC_NO, K21, K22, K23, K24, K25, K26, K27,   K28,   K29, K2a,   K2b,   K2c,   K2d, K2e, KC_NO, KC_NO, K2h, KC_NO, K2j,   KC_NO, KC_NO, K2m, K2n, K2o, K2p   }, \
    { KC_NO, K31, K32, K33, K34, K35, K36, KC_NO, KC_NO, K39, KC_NO, KC_NO, KC_NO, K3d, K3e, KC_NO, K3g,   K3h, K3i,   K3j,   K3k,   K3l,   K3m, K3n, K3o, KC_NO }  \
}
