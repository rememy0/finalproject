cmake_minimum_required(VERSION 3.16)
project(SnakeGame LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(snake
    src/main.cpp
    src/Game.cpp
    src/Snake.cpp
    src/Food.cpp
    src/Input.cpp
    src/Renderer.cpp
)

# TODO: If you switch to platform-specific input (Windows/Linux),
# TODO: add conditional source files and compiler definitions here.
