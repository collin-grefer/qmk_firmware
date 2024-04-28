#include "collin.h"

enum layout_names {
    HOME = 0,
    MOUSE,
    NUMBLOCK,
    SYMBOLS1,
    FUNCTION,
    ARROW,
    SYMBOLS2,
    GAME,
    MEDIA,
};

void keyboard_pre_init_user(void) {
    setPinOutput(24);
    writePinHigh(24);
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT_split_3x5_3(
            LT(1,KC_Q), LT(5,KC_J), LT(2,KC_F), LT(3,KC_R), LCTL_T(KC_P),       RCTL_T(KC_MINS),    LT(8,KC_L), KC_U, KC_Z, LGUI_T(KC_ESC),
            KC_B,       KC_A,       KC_S,       KC_T,       KC_SCLN,            KC_QUOT,            KC_N,       KC_E, KC_I, KC_O,
            LT(4,KC_Y), KC_V,       KC_C,       LT(6,KC_D), LALT_T(KC_TAB),     LALT_T(KC_ENT),     KC_H,       KC_K, KC_G, KC_LBRC,
                                                KC_X, KC_W, LSFT_T(KC_SPC),     RSFT_T(KC_BSPC), KC_M, KC_DEL),
        [1] = LAYOUT_split_3x5_3(
            KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_NO,      KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, KC_BTN3,
            KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, 
            KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_WH_L, KC_WH_R, KC_ACL0, KC_ACL1, KC_ACL2, 
                            KC_NO, KC_LCTL, KC_LSFT,      KC_NO, KC_NO, KC_NO),
        [2] = LAYOUT_split_3x5_3(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_PSLS, KC_P7, KC_P8, KC_P9, KC_PAST, 
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_PMNS, KC_P4, KC_P5, KC_P6, KC_PPLS,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_PDOT, KC_P1, KC_P2, KC_P3, KC_COMM, 
                          KC_NO, KC_NO, KC_NO,      KC_NO, KC_P0, KC_NUM),
        [3] = LAYOUT_split_3x5_3(
            KC_NO, KC_NO, KC_NO,   KC_LSFT, KC_NO,      KC_EQL,         RALT(KC_7), RALT(KC_0), LSFT(KC_RBRC),  RALT(KC_RBRC), 
            KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,      LSFT(KC_NUHS),  LSFT(KC_8), LSFT(KC_9), KC_RBRC,        LSFT(KC_5), 
            KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,      LSFT(KC_2),     RALT(KC_8), RALT(KC_9), CW_TOGG,        KC_GRV, 
                           KC_NO, KC_BSPC, KC_SPC,      KC_COMM, KC_DOT, KC_SLSH),
        [4] = LAYOUT_split_3x5_3(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, 
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, KC_F5, KC_F6, KC_F7, KC_F8, 
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, 
                          KC_NO, KC_NO, KC_NO,      TO(7), KC_NO, KC_NO),
        [5] = LAYOUT_split_3x5_3(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_PGUP, KC_HOME, KC_UP, KC_END, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, KC_BSPC, KC_DEL, KC_NO, KC_NO, 
                       KC_NO, KC_BSPC, KC_SPC,      KC_LSFT, KC_LCTL, KC_NO),
        [6] = LAYOUT_split_3x5_3(
            KC_NO, KC_NO, KC_LSFT, KC_NO, KC_NO,      RALT(KC_Q),     LSFT(KC_7),     LSFT(KC_6),     RALT(KC_NUBS),  RALT(KC_MINS), 
            KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,      KC_NUBS,        LSFT(KC_1),     LSFT(KC_MINS),  LSFT(KC_0),     KC_NUHS,
            KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,      LSFT(KC_NUBS),  LSFT(KC_COMM),  LSFT(KC_DOT),   LSFT(KC_4),     RALT(KC_E), 
                         KC_NO, KC_BSPC, KC_SPC,      KC_PSCR, KC_NO, KC_NO),
        [7] = LAYOUT_split_3x5_3(
            KC_ESC, KC_1, KC_2, KC_3, KC_4,         KC_C, KC_Z, KC_X, KC_T, KC_NO, 
            KC_LSFT, KC_Q, KC_W, KC_E, KC_R,        KC_M, KC_I, KC_J, KC_K, KC_NO, 
            KC_LCTL, KC_A, KC_S, KC_D, KC_F,        KC_B, KC_L, KC_P, KC_G, TO(0), 
                    KC_LALT, KC_SPC, KC_TAB,        KC_TRNS, KC_NO, KC_NO),
        [8] = LAYOUT_split_3x5_3(
            KC_NO, KC_VOLU, RGB_SAD, RGB_SAI, KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
            KC_NO, KC_VOLD, RGB_VAD, RGB_VAI, KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
            KC_NO, KC_MUTE, RGB_HUD, RGB_HUI, BL_TOGG,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
                            KC_LCTL, RGB_MOD, RGB_TOG,  KC_NO, KC_NO, KC_NO)
};

#ifdef RGB_MATRIX_LEDMAPS_ENABLED

const ledmap PROGMEM ledmaps[] = {
        // LB = Left Underglow, RB = Right Underglow
        // L05, L04, L03, L02, L01, R01, R02, R03, R04, R05,
        // L11, L10, L09, L08, L07, R07, R08, R09, R10, R11,
        // L17, L16, L15, L14, L13, R13, R14, R15, R16, R17,
        // L21, L20, L19, R19, R20, R21,
        // LB1, LB2, LB3, LB4, LB5, LB6,
        // RB1, RB2, RB3, RB4, RB5, RB6, 

    [HOME] = RGB_MATRIX_LAYOUT_LEDMAP(
        RED,    RED,    RED,    RED,    ORANGE,     ORANGE, YELLOW, YELLOW, YELLOW, YELLOW,
        YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,     YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,
        RED,    YELLOW, YELLOW, RED,    ORANGE,     ORANGE, YELLOW, YELLOW, YELLOW, YELLOW,
                        YELLOW, YELLOW, ORANGE,     ORANGE, YELLOW, YELLOW,

        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE, PURPLE
    ),
    [MOUSE] = RGB_MATRIX_LAYOUT_LEDMAP(
        YELLOW, BLUE,   BLUE,   BLUE,   YELLOW,     BLUE,   CYAN,   PURPLE,  CYAN,    CYAN,
        YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,     BLUE,   PURPLE, PURPLE,  PURPLE,  YELLOW,
        YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,     CYAN,   CYAN,   YELLOW,  YELLOW,  YELLOW,
                        YELLOW, PURPLE, PURPLE,     YELLOW, YELLOW, YELLOW,

        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE, PURPLE
    ),
    [NUMBLOCK] = RGB_MATRIX_LAYOUT_LEDMAP(
        YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,     BLUE,   PURPLE, PURPLE, PURPLE, BLUE,
        YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,     CYAN,   PURPLE, PURPLE, PURPLE, CYAN,
        YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,     YELLOW, PURPLE, PURPLE, PURPLE, YELLOW,
                        YELLOW, YELLOW, YELLOW,     YELLOW, PURPLE, RED,

        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE, PURPLE
    ),
    [SYMBOLS1] = RGB_MATRIX_LAYOUT_LEDMAP(
        YELLOW, YELLOW, PURPLE, YELLOW, YELLOW,     RED, RED, RED, RED, RED,
        YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,     RED, RED, RED, RED, RED,
        YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,     RED, RED, RED, RED, RED,
                        YELLOW, PURPLE, PURPLE,     RED, RED, RED,

        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE, PURPLE
    ),
    [FUNCTION] = RGB_MATRIX_LAYOUT_LEDMAP(
        YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,     YELLOW, BLUE,   BLUE,   BLUE,   BLUE,
        YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,     YELLOW, CYAN,   CYAN,   CYAN,   CYAN,
        YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,     YELLOW, AZURE,  AZURE,  AZURE,  AZURE,
                        YELLOW, YELLOW, YELLOW,     RED,    YELLOW, YELLOW,

        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE, PURPLE
    ),
    [ARROW] = RGB_MATRIX_LAYOUT_LEDMAP(
        YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,     BLUE,   CYAN,   PURPLE,  CYAN,   YELLOW,
        YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,     BLUE,   PURPLE,  PURPLE,  PURPLE,  YELLOW,
        YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,     YELLOW, CYAN,   CYAN,   YELLOW, YELLOW,
                        YELLOW, YELLOW, YELLOW,     BLUE,   BLUE,   YELLOW,

        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE, PURPLE
    ),
    [SYMBOLS2] = RGB_MATRIX_LAYOUT_LEDMAP(
        YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,     RED, RED, RED, RED, RED,
        YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,     RED, RED, RED, RED, RED,
        YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,     RED, RED, RED, RED, RED,
                              YELLOW, RED, RED,     RED, YELLOW, YELLOW,

        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE, PURPLE
    ),
    [GAME] = RGB_MATRIX_LAYOUT_LEDMAP(
        PURPLE, YELLOW, YELLOW, YELLOW, YELLOW,     YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,
        PURPLE, YELLOW, GREEN,  YELLOW, YELLOW,     YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,
        PURPLE, GREEN,  GREEN,  GREEN,  YELLOW,     YELLOW, YELLOW, YELLOW, YELLOW, RED,
                        PURPLE, PURPLE, PURPLE,     YELLOW, YELLOW, YELLOW,

        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE, PURPLE
    ),
    [MEDIA] = RGB_MATRIX_LAYOUT_LEDMAP(
        YELLOW, PURPLE, PURPLE, PURPLE, YELLOW,     YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,
        YELLOW, PURPLE, PURPLE, PURPLE, YELLOW,     YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,
        YELLOW, PURPLE, PURPLE, PURPLE, PURPLE,      YELLOW, YELLOW, YELLOW, YELLOW, YELLOW,
                       PURPLE, PURPLE, PURPLE,      YELLOW, YELLOW, YELLOW,

        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE, PURPLE
    ),
};

#endif // RGB_MATRIX_LEDMAPS_ENABLED
// clang-format on
