#pragma once

#define DIODE_DIRECTION COL2ROW

// Matrix sizes - rows are doubled-up due to split keyboard
#define MATRIX_ROWS 10
#define MATRIX_COLS 18

// Pins for rows and columns
#define MATRIX_ROW_PINS {D3, D2, D4, C6, D7}
#define MATRIX_COL_PINS {E6, B4, B5, F4, F5, F6, F7, B1, B3}

// Split keyboard configuration
#define MASTER_LEFT
