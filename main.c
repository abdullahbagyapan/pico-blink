#include "pico/stdlib.h"
#include "led/led.h"


int main() {

    LED_Init();


    while (1) {

        LED_On();
        sleep_ms(1000);

        LED_Off();
        sleep_ms(1000);

    }


}