/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    /u/dnlglsn
#define PRODUCT         Void*
#define DESCRIPTION     Split 90 85 80 75 70 65 60 percent keyboard with controller daughter board

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 10

// wiring of each half
#define MATRIX_ROW_PINS { B5, B4, E6, D4, D2, D3 }
#ifdef LEFT_HALF
#define MATRIX_COL_PINS { C6, D7, B6, B2, B3, B1, F7, F6, F5, F4 }
#else
#define MATRIX_COL_PINS { B2, B3, B1, F7, F6, F5, F4, B6, D7, C6 }
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* serial.c configuration for split keyboard */
#define USE_I2C
#define MASTER_LEFT
