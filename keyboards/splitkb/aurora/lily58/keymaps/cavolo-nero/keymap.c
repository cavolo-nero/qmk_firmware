#include QMK_KEYBOARD_H

const key_override_t shift_comma_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_COMM);
const key_override_t shift_dot_override = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_DOT);
const key_override_t shift_semicolon_override = ko_make_basic(MOD_MASK_SHIFT, KC_SCLN, KC_SCLN);
const key_override_t shift_equal_override = ko_make_basic(MOD_MASK_SHIFT, KC_EQL, KC_EQL);

const key_override_t **key_overrides = (const key_override_t *[]) {
    & shift_comma_override,
    & shift_dot_override,
    & shift_semicolon_override,
    & shift_equal_override,
    NULL
};

// as per ISO keyboard layout
#define GB_EXCL S(KC_1)
#define GB_SPMK S(KC_2)
#define GB_GBP S(KC_3)
#define GB_USD S(KC_4)
#define GB_PC S(KC_5)
#define GB_CRT S(KC_6)
#define GB_AMP S(KC_7)
#define GB_AST S(KC_8)
#define GB_LTBR S(KC_9)
#define GB_RTBR S(KC_0)
#define GB_UND S(KC_MINS)
#define GB_LTAB S(KC_COMM)
#define GB_GTAB S(KC_DOT)
#define GB_PIPE S(KC_NUBS)
#define GB_LTCB S(KC_LBRC)
#define GB_RTCB S(KC_RBRC)
#define GB_PLUS S(KC_EQL)
#define GB_QMK S(KC_SLASH)
#define GB_AT S(KC_QUOT)
#define GB_TILD S(KC_NUHS)
#define GB_COLN S(KC_SCLN)
#define KC_SHINS S(KC_INS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_ESC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L,  KC_EQL, KC_LALT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LGUI,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SCLN, KC_CAPS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                 XXXXXXX, KC_LCTL,  KC_ENT,  KC_SPC,    KC_LSFT,   MO(2),   MO(1), XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [1] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      XXXXXXX,KC_SHINS, KC_PAST,  KC_INS,  KC_DEL, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_PSLS, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_HOME,  KC_END, KC_PGUP, KC_PGDN, XXXXXXX,                      KC_PPLS, KC_PMNS, KC_COMM,  KC_DOT, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                 _______, _______, _______, _______,    _______, _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, GB_EXCL, GB_SPMK,  GB_GBP,  GB_USD,   GB_PC,                       GB_CRT,  GB_AMP,  GB_AST, KC_QUOT,  GB_UND, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_NUBS, KC_LBRC, GB_LTBR, GB_LTCB, GB_LTAB,                      GB_GTAB, GB_RTCB, GB_RTBR, KC_RBRC,KC_SLASH, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_GRV,  XXXXXXX,  GB_QMK, GB_PIPE, KC_NUHS,                      GB_PLUS, KC_MINS, GB_COLN, GB_TILD,   GB_AT, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                 _______, _______, _______, _______,    _______, _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  )
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
