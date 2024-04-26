// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_jis(
        KC_ESC,  KC_GRV,KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,   KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR,KC_INS,KC_DEL,
        KC_1,           KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_INT3,          KC_BSPC,
        KC_TAB,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,    KC_P,    KC_LBRC, KC_RBRC,
        KC_CAPS, KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,    KC_SCLN, KC_QUOT, KC_NUHS,                   KC_ENT,
        KC_LSFT,        KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_INT1, KC_UP, KC_RSFT,
        KC_LCTL,  MO(1),KC_LGUI, KC_LALT, KC_INT5,    KC_SPC,    KC_INT4, KC_INT2, KC_RALT, KC_APP, KC_RCTL,KC_LEFT,KC_DOWN,KC_RGHT
    ),
    [1] = LAYOUT_jis(
        _______,_______,_______,KC_MUTE,KC_VOLD,KC_VOLU,KC_BRID,KC_BRIU,_______,_______,_______,_______,_______,_______,_______,KC_PAUS,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,QK_BOOT,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,KC_PGUP,_______,
        _______,_______,_______,_______,_______,_______,_______,_______, KC_NUM,_______,KC_SCRL,KC_HOME,KC_PGDN,KC_END
    ),
    [2] = LAYOUT_jis(
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,  KC_P7,  KC_P8,  KC_P9,KC_PSLS,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,  KC_P4,  KC_P5,  KC_P6,KC_PAST,KC_PENT,_______,
        _______,_______,_______,_______,_______,_______,_______,  KC_P1,  KC_P2,  KC_P3,KC_PMNS,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,  KC_P0,_______,KC_PDOT,KC_PPLS,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______
    )

};

/* Force Numlock off at boot */
void matrix_init_user (void) {
  if (host_keyboard_led_state().num_lock) {
      tap_code(KC_NUM_LOCK);
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if(host_keyboard_led_state().num_lock && IS_LAYER_OFF(2)) {
        layer_on(2);
    }
    else if(!host_keyboard_led_state().num_lock && IS_LAYER_ON(2)) {
        layer_off(2);
    }
    return true;
}

void keyboard_post_init_user(void) {
    // Customise these values to desired behaviour
    debug_enable=true;
    debug_matrix=true;
    //debug_keyboard=true;
    //debug_mouse=true;
}