cmake_minimum_required(VERSION 3.17)
project(THEME)

set(CMAKE_CXX_STANDARD 20)

# Переменные, хранящие файлы библиотек
set(C_THEME_SRC Theme.h Theme.cpp)


add_library(
        THEME
        ${C_THEME_SRC}
)
