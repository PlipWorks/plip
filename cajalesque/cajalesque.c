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
#include "cajalesque.h"

// uint8_t led_pos_x (float);
// uint8_t led_pos_y (float);
//
// led_config_t g_led_config = { {
// 	  // Key Matrix to LED Index
// 	  { 0, 	1, 	2, 	3, 			4,  5 },
// 	  { 6, 	7, 	8, 	9, 			10, 11 },
// 	  { 12, 13, 14, 15, 		16, NO_LED },
// 	  { 17, 18, 19, 20, 		21, 22 },
// 		{ 23, 24, 25, NO_LED, 26, NO_LED }
// 	}, {
// 	  // LED Index to Physical Position
// 	  { led_pos_x(0), led_pos_y(0) },
// 		{ led_pos_x(0), led_pos_y(1) },
// 		{ led_pos_x(0), led_pos_y(2.5) },
// 		{ led_pos_x(0), led_pos_y(3.5) },
// 		{ led_pos_x(0), led_pos_y(4.5) },
// 		{ led_pos_x(0), led_pos_y(5.5) },
// 		{ led_pos_x(1), led_pos_y(0) },
// 		{ led_pos_x(1), led_pos_y(1) },
// 		{ led_pos_x(1), led_pos_y(2.5) },
// 		{ led_pos_x(1), led_pos_y(3.5) },
// 		{ led_pos_x(1), led_pos_y(4.5) },
// 		{ led_pos_x(1.5), led_pos_y(5.5) },
// 		{ led_pos_x(2), led_pos_y(0) },
// 		{ led_pos_x(2), led_pos_y(1) },
// 		{ led_pos_x(2), led_pos_y(2.5) },
// 		{ led_pos_x(2), led_pos_y(3.5) },
// 		{ led_pos_x(2), led_pos_y(4.5) },
// 		{ led_pos_x(3), led_pos_y(0) },
// 		{ led_pos_x(3), led_pos_y(1) },
// 		{ led_pos_x(3), led_pos_y(2.5) },
// 		{ led_pos_x(3), led_pos_y(3.5) },
// 		{ led_pos_x(3), led_pos_y(4.5) },
// 		{ led_pos_x(3.5), led_pos_y(5.5) },
// 		{ led_pos_x(4), led_pos_y(0) },
// 		{ led_pos_x(4), led_pos_y(1) },
// 		{ led_pos_x(4), led_pos_y(3) },
// 		{ led_pos_x(4), led_pos_y(4.5) }
// 	}, {
// 	  // LED Index to Flag
// 	  4, 4, 4, 4, 4, 4,
// 		4, 4, 4, 4, 4, 4,
// 		4, 4, 4, 4, 4,
// 		4, 4, 4, 4, 4, 4,
// 		4, 4, 4,    4,
// 	}
// };
//
// uint8_t led_pos_x (float kb_pos_x) {
// 	return (uint8_t)( 224 / (6.5 - 1) * kb_pos_x ) ;
// }
//
// uint8_t led_pos_y (float kb_pos_y) {
// 	return (uint8_t)( 64 / (5 - 1) * kb_pos_y ) ;
// }
