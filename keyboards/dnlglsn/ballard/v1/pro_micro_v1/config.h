#pragma once

#include "config_common.h"

// Information for USB device
#define VENDOR_ID       0xDEAD
#define PRODUCT_ID      0xBEEF
#define DEVICE_VER      0x0001
#define MANUFACTURER    /u/dnlglsn
#define PRODUCT         Ballard
#define DESCRIPTION     Split columnar staggared 11 columns x 5 rows keyboard with customizable controller daughter board

// A good debouncing delay
#define DEBOUNCING_DELAY 5

// Matrix sizes - rows are doubled-up due to split keyboard
#define MATRIX_ROWS 10
#define MATRIX_COLS 11

// Pins for rows and columns, left and right side respectively
#define MATRIX_ROW_PINS { B5, B4, E6, D7, C6 }
#define MATRIX_COL_PINS { D4, D2, D3, B6, B2, B3, B1, F7, F6, F5, F4 }
#define MATRIX_ROW_PINS_RIGHT { D3, D2, D4, C6, D7 }
#define MATRIX_COL_PINS_RIGHT { E6, B4, B5, F4, F5, F6, F7, B1, B3, B2, B6 }

// Split keyboard configuration
#define USE_I2C	// SCL = D0, SDA = D1
#define MASTER_LEFT
