#include QMK_KEYBOARD_H

/* Generated using qmk json2c (JSON generated using https://config.qmk.fm/#/ergodox_ez/LAYOUT_ergodox_80 )
 * and added layer_state_set_user from the default keymap.c file for ergodox_ez, which makes the
 * LEDs light up depending on the layer.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ergodox_80(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_ESC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, TG(1), KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, MO(2), KC_NUBS, KC_NO, KC_NO, KC_LGUI, KC_LALT, KC_HOME, KC_INS, KC_NO, KC_NO, KC_NO, KC_SPC, KC_NO, KC_DEL, KC_ESC, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, TG(1), KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NUHS, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, MO(1), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_EQL, KC_PSCR, KC_END, KC_PGUP, KC_NO, KC_NO, KC_PGDN, KC_ENT, KC_BSPC),
	[1] = LAYOUT_ergodox_80(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F11, KC_TAB, KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_LSFT, KC_TRNS, KC_LCTL, KC_HASH, KC_DLR, KC_LPRN, KC_RPRN, KC_GRV, KC_LSFT, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_TRNS, KC_NUBS, KC_NO, KC_NO, KC_LGUI, KC_LALT, KC_HOME, KC_INS, KC_NO, KC_NO, KC_NO, KC_SPC, KC_NO, KC_DEL, KC_F12, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_MINS, KC_TRNS, KC_UP, KC_7, KC_8, KC_9, KC_ASTR, KC_NUHS, KC_DOWN, KC_4, KC_5, KC_6, KC_PLUS, KC_QUOT, KC_TRNS, KC_AMPR, KC_1, KC_2, KC_3, KC_LGUI, KC_RSFT, KC_LEFT, KC_DOT, KC_0, KC_EQL, KC_EQL, KC_PSCR, KC_END, KC_PGUP, KC_NO, KC_NO, KC_PGDN, KC_ENT, KC_BSPC),
	[2] = LAYOUT_ergodox_80(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MRWD, KC_MFFD, KC_VOLU, KC_MPLY, KC_MUTE, KC_VOLD, KC_MSTP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MRWD, KC_MFFD, KC_VOLU, KC_MPLY, KC_MUTE, KC_VOLD, KC_MSTP, KC_NO)
};

layer_state_t layer_state_set_user(layer_state_t state) {
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();

  uint8_t layer = get_highest_layer(state);
  switch (layer) {
      case 0:
        #ifdef RGBLIGHT_COLOR_LAYER_0
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
        #else
        #ifdef RGBLIGHT_ENABLE
          rgblight_init();
        #endif
        #endif
        break;
      case 1:
        ergodox_right_led_1_on();
        #ifdef RGBLIGHT_COLOR_LAYER_1
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_1);
        #endif
        break;
      case 2:
        ergodox_right_led_2_on();
        #ifdef RGBLIGHT_COLOR_LAYER_2
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_2);
        #endif
        break;
      case 3:
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_3
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_3);
        #endif
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        #ifdef RGBLIGHT_COLOR_LAYER_4
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_4);
        #endif
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_5
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_5);
        #endif
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_6
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
        #endif
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_7
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_7);
        #endif
        break;
      default:
        break;
    }

  return state;
};
