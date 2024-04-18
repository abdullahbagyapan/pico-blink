cmake_minimum_required(VERSION 3.13)

# initialize the SDK directly
include(pico_sdk_import.cmake)

project(RASPBERRY_PI_PICO_BLINK_LED)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

add_compile_options(-Wall
    -Werror
)

# rest of your project
add_executable(main
    main.c
)

add_subdirectory(led)

# Add pico_stdlib library which aggregates commonly used features
target_link_libraries(main pico_stdlib led)


# create map/bin/hex/uf2 file in addition to ELF.
pico_add_extra_outputs(main)