#include "mainConfig.h"

const char hello[13] = "hello world\n";
int main(){
    //this inits the stdio
    stdio_init_all();

    //do not worry about printf as the function will still work
    printf(hello);
    gpio_init(CYW43_WL_GPIO_LED_PIN);


    while(1){
        gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
        sleep_ms(100);
        gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
        sleep_ms(100);
    }
    return 0;
}
