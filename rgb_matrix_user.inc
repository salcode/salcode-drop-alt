RGB_MATRIX_EFFECT(salcode_proof_of_concept)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static bool salcode_proof_of_concept(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    // Blank out the colors on initialization.
    if (params->init) {
        rgb_matrix_set_color_all(0, 0, 0);
    }

    for (uint8_t i = led_min; i < led_max; i++) {
        // Blue.
        rgb_matrix_set_color(i, 38, 104, 178);

        // Indices: 32, 31, 39 = S, A, L on Drop ALT
        // See: config_led.c
        if (i == 32 || i == 31 || i == 39) {
            // White.
            rgb_matrix_set_color(i, 255, 255, 255);
        }
    }

    return led_max < DRIVER_LED_TOTAL;
}
#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
