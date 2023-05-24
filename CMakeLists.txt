cmake_minimum_required(VERSION 3.0)
project(Nuked-MD)

find_package(SDL2 REQUIRED CONFIG REQUIRED COMPONENTS SDL2)
find_package(SDL2 REQUIRED CONFIG COMPONENTS SDL2main)

add_executable(Nuked-MD
	68k.c
	arbiter.c
	fc1004.c
	fm.c
	iochip.c
	md.c
	tmss.c
	vdp.c
	z80.c
	vram.c)

if(TARGET SDL2::SDL2main)
	target_link_libraries(Nuked-MD PRIVATE SDL2::SDL2main)
endif()

target_link_libraries(Nuked-MD PRIVATE SDL2::SDL2)

