#include <stdio.h>
#include "FreeRTOS.h"
#include "pico/stdlib.h"
#include "pico/multicore.h"
#include "pico/cyw43_arch.h"

int main(){
    //stdio_init_all();
    printf("hello world\n");
    while(1){
        stdio_init_all();

    }
    return 0;
}
