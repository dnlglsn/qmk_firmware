#include QMK_KEYBOARD_H

enum layer_names {
    _DEFAULT,
    _FN,
};

// Fillers to make layering more clear
#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    //                                                                      <-- Left Half    |    Right Half -->
    //  0        1        2        3        4        5        6        7        8            |    9        10       11       12       13       14       15       16       17
    [_DEFAULT] = LAYOUT(
        KC_F1,   KC_F2,   KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,             KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,  KC_HOME, \
        KC_F3,   KC_F4,   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_END,  \
        KC_F5,   KC_F6,   KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     		          KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGUP, \
        KC_F7,   KC_F8,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   		              KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_PGDN, \
        KC_F9,   KC_F10,  KC_LCTL, KC_LGUI, MO(_FN),          KC_SPC,  KC_LALT,                            KC_SPC,           MO(_FN), KC_APP,  KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT  \
    ),

    [_FN] = LAYOUT(
        _______, KC_VOLU, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, KC_VOLD, _______, KC_HOME, KC_UP,   KC_END,  KC_PGUP, _______,                   _______, _______, _______, _______, KC_PSCR, _______, _______, _______, _______, \
        _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, _______,     		      _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______,   		          _______, _______, KC_MUTE, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, MO(_FN),          _______, _______,                            _______,          MO(_FN), _______, _______, _______, _______, _______  \
    )

};
