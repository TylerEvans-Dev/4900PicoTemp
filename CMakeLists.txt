#sets the min.

cmake_minimum_required(VERSION 3.14)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


#sets the board
set(PICO_BOARD pico_w CACHE STRING "Board type")

#this is including the pico sdk
include(lib/pico-sdk/pico_sdk_init.cmake)

#this goes into freertos and includes the files needed for
include(lib/FreeRTOS-Kernel/portable/ThirdParty/GCC/RP2040/FreeRTOS_Kernel_import.cmake)

project(robo C CXX ASM)
#this inits the pico sdk
pico_sdk_init()

set(sdkVersion 2.0.0)
set(toolchainVersion 13_2_Rel1)
#set(picotoolVersion 2.1.0)

#this configs the cores and exits when an issue occurs will boot into the boot
add_compile_definitions(
    configNUMBER_OF_CORES=1
    PICO_ENTER_USB_BOOT_ON_EXIT=1
    )

include_directories(${CMAKE_CURRENT_LIST_DIR}/include)

#this is the executable
add_executable(robo src/main.c)

#here I am setting the name of program, and the version.
pico_set_program_name(robo "robo")
pico_set_program_version(robo "0.1")

#this enables uart comuncation
pico_enable_stdio_uart(robo 0)
#this enables usb comunciation
pico_enable_stdio_usb(robo 1)



#adding needed libs
target_link_libraries(robo PRIVATE pico_stdlib pico_multicore pico_async_context_freertos FreeRTOS-Kernel-Heap4)


if(PICO_CYW43_SUPPORTED)
    target_link_libraries(robo PRIVATE pico_cyw43_arch_none)
endif()

pico_add_extra_outputs(robo)
