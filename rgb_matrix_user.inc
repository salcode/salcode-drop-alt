RGB_MATRIX_EFFECT(salcode_proof_of_concept)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS
#ifndef LED_FLAG_KEYS
#define LED_FLAG_KEYS (LED_FLAG_KEYLIGHT | LED_FLAG_MODIFIER)
#endif

static bool salcode_proof_of_concept(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    HSV bg_hsv = rgb_matrix_config.hsv;

    HSV wasd_hsv = rgb_matrix_config.hsv;
    wasd_hsv.h += rgb_matrix_config.speed;
    RGB wasd_rgb = hsv_to_rgb(wasd_hsv);

    // Blank out the colors on initialization.
    if (params->init) {
        rgb_matrix_set_color_all(0, 0, 0);
    }

    for (uint8_t i = led_min; i < led_max; i++) {
        bg_hsv.v = rgb_matrix_config.hsv.v;

        RGB bg_rgb = hsv_to_rgb(bg_hsv);
        rgb_matrix_set_color(i, bg_rgb.r, bg_rgb.g, bg_rgb.b);

        // Indices: 17, 31, 32, 33 = W, A, S, D on Drop ALT
        // See: config_led.c
        if (i == 17 || (i >= 31 && i < 34)) {
            rgb_matrix_set_color(i, wasd_rgb.r, wasd_rgb.g, wasd_rgb.b);
        }
    }

    return led_max < DRIVER_LED_TOTAL;
}
#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
