/*
 @module: LED
 @author: Abdullah Bagyapan
 @date:   13/04/2024
*/


/*================================== Libraries ==================================*/


// Module's own header
#include "led.h"


// Pico libraries
#include "pico/stdlib.h"


/*================================== Functions ==================================*/


void LED_Init(void) {

    // Initialize LED pin
    gpio_init(LED_PIN);

    // Set direction as out
    gpio_set_dir(LED_PIN, true);

}


void LED_On(void) {

    gpio_put(LED_PIN, LED_LEVEL_ON);

}


void LED_Off(void) {

    gpio_put(LED_PIN, LED_LEVEL_OFF);

}