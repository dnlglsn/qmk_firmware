#pragma once

#include "config_common.h"

// Information for USB device
#define VENDOR_ID       0xDEAD
#define PRODUCT_ID      0xBEEF
#define DEVICE_VER      0x0001
#define MANUFACTURER    /u/dnlglsn
#define PRODUCT         Void*
#define DESCRIPTION     Split 60 to 90 percent keyboard with customizable controller daughter board

// A good debouncing delay
#define DEBOUNCING_DELAY 5

// Matrix sizes - rows are doubled-up due to split keyboard
#define MATRIX_ROWS 12
#define MATRIX_COLS 10

// Pins for rows and columns
#define MATRIX_ROW_PINS { B5, B4, E6, D4, D2, D3 }
#define MATRIX_COL_PINS { B2, B3, B1, F7, F6, F5, F4, B6, D7, C6 }

// Old working code
// #ifdef LEFT_HALF
// #define MATRIX_COL_PINS { C6, D7, B6, B2, B3, B1, F7, F6, F5, F4 }
// #else
// #define MATRIX_COL_PINS { B2, B3, B1, F7, F6, F5, F4, B6, D7, C6 }
// #endif

// split keyboard configuration
#define USE_I2C
#define MASTER_LEFT
