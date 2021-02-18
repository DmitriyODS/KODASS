cmake_minimum_required(VERSION 3.17)
project(CManager)

set(CMAKE_CXX_STANDARD 20)

# Переменные, хранящие файлы библиотек
set(C_MANAGER_SRC CManager.h CManager.cpp)


add_library(
        CManager
        ${C_MANAGER_SRC}
)
