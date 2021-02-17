cmake_minimum_required(VERSION 3.17)
project(CScreen)

set(CMAKE_CXX_STANDARD 20)

# Переменные, хранящие файлы библиотек
set(C_SCREEN_SRC CScreen.h CScreen.cpp)


add_library(
        CScreen
        ${C_SCREEN_SRC}
)
