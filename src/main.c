#include "mainConfig.h"
#include <hardware/gpio.h>
#include <pico/cyw43_arch.h>
#include <pico/time.h>

const char hello[13] = "hello world ";
const char name[4] = "robo";

void task(void){
    int i =0;
    while(1){
        i += 1;
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
        sleep_ms(100);
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
        sleep_ms(100);
        printf("hello world %i \n", i);
    }
}


int main(){
    //this inits the stdio
    stdio_init_all();

    //do not worry about printf as the function will still work
    cyw43_arch_init();
    gpio_init(0);
    int i =0;

    task();




    return 0;
}
