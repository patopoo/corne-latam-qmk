/**
 * QMK Legacy RGB and Mouse Keys Compatibility Header
 * For code written around 2023 or older compiled in modern QMK.
 */

#pragma once

#ifndef QMK_COMPAT_H
#define QMK_COMPAT_H

// --- PARCHE PARA BOTONES DEL MOUSE ---
#ifndef KC_BTN1
#    define KC_BTN1 QK_MOUSE_BUTTON_1
#endif
#ifndef KC_BTN2
#    define KC_BTN2 QK_MOUSE_BUTTON_2
#endif
#ifndef KC_BTN3
#    define KC_BTN3 QK_MOUSE_BUTTON_3
#endif
#ifndef KC_BTN4
#    define KC_BTN4 QK_MOUSE_BUTTON_4
#endif
#ifndef KC_BTN5
#    define KC_BTN5 QK_MOUSE_BUTTON_5
#endif

// --- PARCHE PARA LA RUEDA DEL MOUSE (SCROLL) ---
#ifndef KC_WH_U
#    define KC_WH_U QK_MOUSE_WHEEL_UP
#endif
#ifndef KC_WH_D
#    define KC_WH_D QK_MOUSE_WHEEL_DOWN
#endif
#ifndef KC_WH_L
#    define KC_WH_L QK_MOUSE_WHEEL_LEFT
#endif
#ifndef KC_WH_R
#    define KC_WH_R QK_MOUSE_WHEEL_RIGHT
#endif

// ==========================================================================
// OPCON A: SI TU TECLADO USA RGB MATRIX (Luces individuales por tecla)
// ==========================================================================
#ifndef RGB_TOG
#    define RGB_TOG  RM_TOGG  
#    define RGB_MOD  RM_NEXT  
#    define RGB_RMOD RM_PREV  
#    define RGB_HUI  RM_HUEU  
#    define RGB_HUD  RM_HUED  
#    define RGB_SAI  RM_SATU  
#    define RGB_SAD  RM_SATD  
#    define RGB_VAI  RM_VALU  
#    define RGB_VAD  RM_VALD  
#endif

/* 
==========================================================================
OPCIÓN B: SI TU TECLADO USA RGBLIGHT (Tiras LED / Underglow trasero básico)
==========================================================================
Si la Opción A te da error al compilar, borra las líneas de arriba, quita las 
barras de comentarios "/ *" de este bloque y usa este mapeo en su lugar:

#ifndef RGB_TOG
#    define RGB_TOG  UG_TOGG
#    define RGB_MOD  UG_NEXT
#    define RGB_RMOD UG_PREV
#    define RGB_HUI  UG_HUEU
#    define RGB_HUD  UG_HUED
#    define RGB_SAI  UG_SATU
#    define RGB_SAD  UG_SATD
#    define RGB_VAI  UG_VALU
#    define RGB_VAD  UG_VALD
#endif
*/

#endif // QMK_COMPAT_H
