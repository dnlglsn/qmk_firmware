#pragma once

#include "quantum.h"

#define LAYOUT( \
    L_ac, L_ab, L_aa, L_a1, L_a2, L_a3, L_a4, L_a5, L_a6, L_a7,     R_a1, R_a2, R_a3, R_a4, R_a5, R_a6, R_a7, R_a8, R_a9, R_aa, \
    L_1c, L_1b, L_1a, L_11, L_12, L_13, L_14, L_15, L_16, L_17,     R_11, R_12, R_13, R_14, R_15, R_16, R_17, R_b0, R_b1, R_1a, \
    L_2c, L_2b, L_2a, L_21, L_22, L_23, L_24, L_25, L_26, L_27,     R_21, R_22, R_23, R_24, R_25, R_26, R_27, xxx0, R_29, R_2a, \
    L_3c, L_3b, L_3a, L_31, L_32, L_33, L_34, L_35, L_36, xxx1,     R_31, R_32, R_33, R_34, R_35, R_36, R_37, R_38, R_39, R_3a, \
    L_4c, L_4b, L_4a, L_p0, L_p1, L_p2, L_p3, L_p4, L_p5, L_p6,     R_g0, R_g1, R_g2, R_g3, R_g4, R_g5, R_g6, R_g7, R_g8, R_4a, \
    L_5c, L_5b, L_5a, L_51, L_o0, L_o1, L_o2, L_o3, xxx2, xxx3,     xxx4, R_y0, xxx5, R_y1, R_y2, R_y3, R_y4, R_y5, R_y6, R_5a \
    ) \
    { \
        { L_a1, L_a2, L_a3, L_a4, L_a5, L_a6, L_a7, L_aa, L_ab, L_ac }, \
        { L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_1a, L_1b, L_1c }, \
        { L_21, L_22, L_23, L_24, L_25, L_26, L_27, L_2a, L_2b, L_2c }, \
        { L_31, L_32, L_33, L_34, L_35, L_36, xxx0, L_3a, L_3b, L_3c }, \
        { L_p0, L_p1, L_p2, L_p3, L_p4, L_p5, L_p6, L_4a, L_4b, L_4c }, \
        { L_51, L_o0, L_o1, L_o2, L_o3, xxx1, xxx2, L_5a, L_5b, L_5c }, \
        { R_a1, R_a2, R_a3, R_a4, R_a5, R_a6, R_a7, R_a8, R_a9, R_aa }, \
        { R_11, R_12, R_13, R_14, R_15, R_16, R_17, R_b0, R_b1, R_1a }, \
        { R_21, R_22, R_23, R_24, R_25, R_26, R_27, xxx3, R_29, R_2a }, \
        { R_31, R_32, R_33, R_34, R_35, R_36, R_37, R_38, R_39, R_3a }, \
        { R_g0, R_g1, R_g2, R_g3, R_g4, R_g5, R_g6, R_g7, R_g8, R_4a }, \
        { xxx4, R_y0, xxx5, R_y1, R_y2, R_y3, R_y4, R_y5, R_y6, R_5a } \
    }
