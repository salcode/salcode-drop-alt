RGB_MATRIX_EFFECT(salcode_proof_of_concept)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS
#ifndef LED_FLAG_KEYS
#define LED_FLAG_KEYS (LED_FLAG_KEYLIGHT | LED_FLAG_MODIFIER)
#endif

static bool salcode_proof_of_concept(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    if (params->init) {
        rgb_matrix_set_color_all(38,104,178);
    }
}
