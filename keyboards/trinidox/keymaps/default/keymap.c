
#include QMK_KEYBOARD_H
#include "collin.h"
#include "keymap_german.h"

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
            LT(1,DE_Z), LT(5,DE_Y), LT(2,DE_U), LT(3,DE_A),     LCTL_T(DE_Q),       RCTL_T(DE_P),    LT(8,DE_B), DE_M,  DE_L, LGUI_T(DE_SS),
            DE_C,       DE_S,       DE_I,       DE_E,           DE_O,               DE_D,            DE_T,       DE_N,  DE_R, DE_H,
            LT(4,DE_V), DE_X,       DE_UDIA,    LT(6,DE_ADIA),  LALT_T(KC_TAB),     LALT_T(KC_ENT),  DE_G,       DE_F, DE_J, DE_K,
                                    KC_ESC,     DE_ODIA,        LSFT_T(KC_SPC),     RSFT_T(KC_BSPC), DE_W,       KC_DEL),
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
                         KC_NO, KC_BSPC, KC_SPC,      KC_PSCR, KC_APP, KC_NO),
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
        AZURE,  AZURE,  AZURE,  AZURE,  BLUE,     BLUE,   PURPLE, PURPLE, PURPLE, PURPLE,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,   PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,
        AZURE,  PURPLE, PURPLE, AZURE,  BLUE,     BLUE,   PURPLE, PURPLE, PURPLE, PURPLE,
                        PURPLE, PURPLE, BLUE,     BLUE,   PURPLE, PURPLE,

        AZURE, AZURE, AZURE, AZURE, AZURE, AZURE,
        AZURE, AZURE, AZURE, AZURE, AZURE, AZURE
    ),
    [MOUSE] = RGB_MATRIX_LAYOUT_LEDMAP(
        PURPLE, BLUE,   BLUE,   BLUE,   PURPLE,     BLUE,   CYAN,   AZURE,  CYAN,    CYAN,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,     BLUE,   AZURE, AZURE,  AZURE,  PURPLE,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,     CYAN,   CYAN,   PURPLE,  PURPLE,  PURPLE,
                        PURPLE, AZURE, AZURE,     PURPLE, PURPLE, PURPLE,

        AZURE, AZURE, AZURE, AZURE, AZURE, AZURE,
        AZURE, AZURE, AZURE, AZURE, AZURE, AZURE
    ),
    [NUMBLOCK] = RGB_MATRIX_LAYOUT_LEDMAP(
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,     BLUE,   AZURE, AZURE, AZURE, BLUE,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,     CYAN,   AZURE, AZURE, AZURE, CYAN,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,     PURPLE, AZURE, AZURE, AZURE, PURPLE,
                        PURPLE, PURPLE, PURPLE,     PURPLE, AZURE, AZURE,

        AZURE, AZURE, AZURE, AZURE, AZURE, AZURE,
        AZURE, AZURE, AZURE, AZURE, AZURE, AZURE
    ),
    [SYMBOLS1] = RGB_MATRIX_LAYOUT_LEDMAP(
        PURPLE, PURPLE, AZURE, PURPLE, PURPLE,     AZURE, AZURE, AZURE, AZURE, AZURE,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,     AZURE, AZURE, AZURE, AZURE, AZURE,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,     AZURE, AZURE, AZURE, AZURE, AZURE,
                        PURPLE, AZURE, AZURE,     AZURE, AZURE, AZURE,

        AZURE, AZURE, AZURE, AZURE, AZURE, AZURE,
        AZURE, AZURE, AZURE, AZURE, AZURE, AZURE
    ),
    [FUNCTION] = RGB_MATRIX_LAYOUT_LEDMAP(
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,     PURPLE, BLUE,   BLUE,   BLUE,   BLUE,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,     PURPLE, CYAN,   CYAN,   CYAN,   CYAN,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,     PURPLE, AZURE,  AZURE,  AZURE,  AZURE,
                        PURPLE, PURPLE, PURPLE,     AZURE,    PURPLE, PURPLE,

        AZURE, AZURE, AZURE, AZURE, AZURE, AZURE,
        AZURE, AZURE, AZURE, AZURE, AZURE, AZURE
    ),
    [ARROW] = RGB_MATRIX_LAYOUT_LEDMAP(
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,     BLUE,   CYAN,   AZURE,  CYAN,   PURPLE,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,     BLUE,   AZURE,  AZURE,  AZURE,  PURPLE,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,     PURPLE, CYAN,   CYAN,   PURPLE, PURPLE,
                        PURPLE, PURPLE, PURPLE,     BLUE,   BLUE,   PURPLE,

        AZURE, AZURE, AZURE, AZURE, AZURE, AZURE,
        AZURE, AZURE, AZURE, AZURE, AZURE, AZURE
    ),
    [SYMBOLS2] = RGB_MATRIX_LAYOUT_LEDMAP(
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,     AZURE, AZURE, AZURE, AZURE, AZURE,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,     AZURE, AZURE, AZURE, AZURE, AZURE,
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,     AZURE, AZURE, AZURE, AZURE, AZURE,
                              PURPLE, AZURE, AZURE,     AZURE, PURPLE, PURPLE,

        AZURE, AZURE, AZURE, AZURE, AZURE, AZURE,
        AZURE, AZURE, AZURE, AZURE, AZURE, AZURE
    ),
    [GAME] = RGB_MATRIX_LAYOUT_LEDMAP(
        AZURE, PURPLE, PURPLE, PURPLE, PURPLE,     PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,
        AZURE, PURPLE, GREEN,  PURPLE, PURPLE,     PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,
        AZURE, GREEN,  GREEN,  GREEN,  PURPLE,     PURPLE, PURPLE, PURPLE, PURPLE, AZURE,
                        AZURE, AZURE, AZURE,     PURPLE, PURPLE, PURPLE,

        AZURE, AZURE, AZURE, AZURE, AZURE, AZURE,
        AZURE, AZURE, AZURE, AZURE, AZURE, AZURE
    ),
    [MEDIA] = RGB_MATRIX_LAYOUT_LEDMAP(
        PURPLE, AZURE, AZURE, AZURE, PURPLE,     PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,
        PURPLE, AZURE, AZURE, AZURE, PURPLE,     PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,
        PURPLE, AZURE, AZURE, AZURE, AZURE,      PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,
                       AZURE, AZURE, AZURE,      PURPLE, PURPLE, PURPLE,

        AZURE, AZURE, AZURE, AZURE, AZURE, AZURE,
        AZURE, AZURE, AZURE, AZURE, AZURE, AZURE
    ),
};

#endif // RGB_MATRIX_LEDMAPS_ENABLED
// clang-format on
