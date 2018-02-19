cmake_minimum_required(VERSION 3.9)
project(cppcursus)

set(CMAKE_CXX_STANDARD 11)
add_executable(cppcursus
        game.cpp
        game.h
        precomp.h
        surface.cpp
        surface.h
        template.cpp
        template.h)
target_link_libraries(cppcursus SDL2 GLEW GLU GL freeimage)
