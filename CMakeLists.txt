cmake_minimum_required(VERSION 3.5)
project(Nuked-MD)

find_package(SDL2 REQUIRED CONFIG REQUIRED COMPONENTS SDL2)
find_package(SDL2 REQUIRED CONFIG COMPONENTS SDL2main)

# Force the compiler to spit warnings.
if (MSVC)
    # warning level 4
    add_compile_options(/W4)
else()
    # additional warnings
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_executable(Nuked-MD
	68k.c
	arbiter.c
	fc1004.c
	fm.c
        input.c
	iochip.c
	md.c
	tmss.c
	vdp.c
	z80.c
	vram.c
	video.c)

if(TARGET SDL2::SDL2main)
	target_link_libraries(Nuked-MD PRIVATE SDL2::SDL2main)
endif()

target_link_libraries(Nuked-MD PRIVATE SDL2::SDL2)

