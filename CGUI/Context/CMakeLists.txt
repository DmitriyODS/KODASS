cmake_minimum_required(VERSION 3.17)
project(Context)

set(CMAKE_CXX_STANDARD 20)

# Переменные, хранящие файлы библиотек
set(C_CONTEXT_SRC Context.h Context.cpp)


add_library(
        Context
        ${C_CONTEXT_SRC}
)
