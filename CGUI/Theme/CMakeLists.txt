cmake_minimum_required(VERSION 3.17)
project(Theme)

set(CMAKE_CXX_STANDARD 20)

# Переменные, хранящие файлы библиотек
set(C_THEME_SRC Theme.h Theme.cpp)


add_library(
        Theme
        ${C_THEME_SRC}
)
