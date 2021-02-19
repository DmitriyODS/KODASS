cmake_minimum_required(VERSION 3.17)
project(CManager)

set(CMAKE_CXX_STANDARD 20)

# Переменные, хранящие файлы библиотеки
set(C_MANAGER_SRC CManager.h CManager.cpp)

# Собираем библиотеку
add_library(CManager STATIC ${C_MANAGER_SRC})
