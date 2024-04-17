file(GLOB FILES *.c *.h)

add_library(led ${FILES})

target_link_libraries(led pico_stdlib)
