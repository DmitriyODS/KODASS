cmake_minimum_required(VERSION 3.17)
project(ConsoleAPI)

set(CMAKE_CXX_STANDARD 20)

# Переменные, хранящие файлы библиотеки
set(CONSOLE_API_SRC ConsoleAPI.h ConsoleAPI.cpp)


add_library(
        ConsoleAPI
        ${C_MANAGER_SRC}
)
