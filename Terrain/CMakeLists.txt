set (SRC
    src/init.c
    src/load_shader.c
    src/draw.c
    src/main.c)

set (HEADER
    include.h)

add_executable(terrain ${SRC} ${HEADER})
target_link_libraries(terrain Common)
