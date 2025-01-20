#include <hardware/gpio.h>
#include <pico/time.h>
#include <stdio.h>
#include "FreeRTOS.h"
#include "pico/stdlib.h"
#include "pico/multicore.h"
#include "pico/cyw43_arch.h"

int main(){
    //this inits the stdio
    stdio_init_all();
    printf("hello world\n");
    gpio_init(CYW43_WL_GPIO_LED_PIN);


    while(1){
        gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
        sleep_ms(100);
        gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
        sleep_ms(100);
    }
    return 0;
}
