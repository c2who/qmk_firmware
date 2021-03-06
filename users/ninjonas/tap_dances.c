#include "ninjonas.h"

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_ESC_CAPS]     = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),
  [TD_LBRC_BACK]    = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, LGUI(KC_LBRC)),
  [TD_RBRC_FWD]     = ACTION_TAP_DANCE_DOUBLE(KC_RBRC, LGUI(KC_RBRC)),
  [TD_TAB_CTRLTAB]  = ACTION_TAP_DANCE_DOUBLE(KC_TAB, LCTL(KC_TAB)),
  [TD_GRV_CTRLGRV]  = ACTION_TAP_DANCE_DOUBLE(KC_GRV, LGUI(KC_GRV)),
  [TD_GUI_GUISPC]   = ACTION_TAP_DANCE_DOUBLE(KC_LGUI, LGUI(KC_SPC)),
  [TD_W_CTRLW]      = ACTION_TAP_DANCE_DOUBLE(KC_W, LGUI(KC_W)),
  [TD_Q_GUIQ]       = ACTION_TAP_DANCE_DOUBLE(KC_Q, LGUI(KC_Q)),
};