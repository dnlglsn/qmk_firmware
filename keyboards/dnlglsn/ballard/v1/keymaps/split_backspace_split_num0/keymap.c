#include QMK_KEYBOARD_H

// References
// https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md
// https://github.com/qmk/qmk_firmware/blob/master/docs/custom_quantum_functions.md#example-process_record_user-implementation
// https://github.com/qmk/qmk_firmware/blob/master/quantum/send_string_keycodes.h
// https://docs.qmk.fm/#/feature_macros?id=tap-down-and-up

// Layers
#define _QWERT 0
#define _GAMEQ 1
#define _GAMEC 2
#define _COLEM 3
#define _FQ 4
#define _FC 5
#define _NAVQ 6
#define _NAVC 7

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

// Keycode combo aliases
#define L_QWERT DF(_QWERT) // Change to the qwerty layer
#define L_COLEM DF(_COLEM) // Change to the colemak layer
#define L_GAMEQ DF(_GAMEQ) // Change to the qwerty game layer
#define L_GAMEC DF(_GAMEC) // Change to the colemak game layer
#define L_NAVQ  DF(_NAVQ) // Change to the qwerty navigation lock layer
#define L_NAVC  DF(_NAVC) // Change to the colemak navigation lock layer

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
	ZZ_CTRL = SAFE_RANGE,
	ZZ_UP,
	ZZ_DOWN
};

// Layout template
// The positions with XXXXXXX don't actually exist in the matrix on the PCB.
//                                             LEFT SIDE                                                                                              RIGHT SIDE
//		  c11      c10      c9       c8       c7       c6       c5       c4       c3       c2       c1            c1       c2       c3       c4       c5       c6       c7       c8       c9       c10      c11
// r1	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
// r2	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
// r3	XXXXXXX, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX,
// r4	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
// r5	XXXXXXX, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//                                                                                  <-- Left Half   |   Right Half -->

[_QWERT] = LAYOUT( \
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ESC,  XXXXXXX, KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS,		KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_BSPC, KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_GRV,  KC_1,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC,		KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_0,    KC_BSLS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_TAB,  KC_Q,    KC_S,    KC_D,    KC_F,    KC_G,    XXXXXXX,		XXXXXXX, KC_H,    KC_J,    KC_K,    KC_L,    KC_P,    KC_QUOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LSFT, KC_A,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX,		XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SCLN, KC_ENT,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LCTL, KC_Z,    KC_LGUI, XXXXXXX, KC_LALT, KC_SPC,  MO(_FQ),		MO(_FQ), KC_SPC,  L_NAVQ,  XXXXXXX, KC_APP,  KC_SLSH, KC_RCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),

[_GAMEQ] = LAYOUT( \
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_KP_0,		L_QWERT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_GAMEC] = LAYOUT( \
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		L_COLEM, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_COLEM] = LAYOUT( \
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, KC_F,    KC_P,    KC_G,    _______,		_______, KC_J,    KC_L,    KC_U,    KC_Y,    _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, KC_R,    KC_S,    KC_T,    KC_D,    _______,		_______, _______, KC_N,    KC_E,    KC_I,    KC_SCLN, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, KC_K,    _______, _______, _______, KC_O,    _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, MO(_FC),		MO(_FC), _______, L_NAVC,  _______, _______, _______, _______, _______, _______, _______, _______
),

[_FQ] = LAYOUT( \
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MUTE, XXXXXXX, KC_F2,   KC_F3,   KC_F4,   KC_F5,   XXXXXXX,		XXXXXXX, KC_F6,   KC_F7,   KC_F8,   KC_F9,   XXXXXXX, KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLU, KC_F1,   KC_HOME, XXXXXXX, KC_END,  KC_PGUP, XXXXXXX,		XXXXXXX, KC_PGUP, KC_HOME, XXXXXXX, KC_END,  KC_F10,  KC_F11,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD, XXXXXXX, KC_LEFT, KC_UP,   KC_RGHT, KC_PGDN, XXXXXXX,		XXXXXXX, KC_PGDN, KC_LEFT, KC_UP,   KC_RGHT, KC_PSCR, L_GAMEQ, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, KC_DOWN, XXXXXXX, KC_CAPS, XXXXXXX,		XXXXXXX, XXXXXXX, XXXXXXX, KC_DOWN, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),

[_FC] = LAYOUT( \
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, L_GAMEC, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_NAVQ] = LAYOUT( \
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, XXXXXXX, KC_END,  KC_PGUP, XXXXXXX,		XXXXXXX, KC_PGUP, KC_HOME, XXXXXXX, KC_END,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_UP,   KC_RGHT, KC_PGDN, XXXXXXX,		XXXXXXX, KC_PGDN, KC_LEFT, KC_UP,   KC_RGHT, XXXXXXX, L_QWERT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_DOWN, XXXXXXX, XXXXXXX, XXXXXXX,		XXXXXXX, XXXXXXX, XXXXXXX, KC_DOWN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,		XXXXXXX, XXXXXXX, L_QWERT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),

[_NAVC] = LAYOUT( \
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, XXXXXXX, KC_END,  KC_PGUP, XXXXXXX,		XXXXXXX, KC_PGUP, KC_HOME, XXXXXXX, KC_END,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_UP,   KC_RGHT, KC_PGDN, XXXXXXX,		XXXXXXX, KC_PGDN, KC_LEFT, KC_UP,   KC_RGHT, XXXXXXX, L_COLEM, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_DOWN, XXXXXXX, XXXXXXX, XXXXXXX,		XXXXXXX, XXXXXXX, XXXXXXX, KC_DOWN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,		XXXXXXX, XXXXXXX, L_COLEM, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),

};
