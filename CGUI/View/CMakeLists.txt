cmake_minimum_required(VERSION 3.17)
project(View)

set(CMAKE_CXX_STANDARD 20)

# Переменные, хранящие файлы библиотек
set(A_VIEW_SRC AView.h AView.cpp)
set(C_VIEW_SRC CView.h CView.cpp)


add_library(
        View
        ${A_VIEW_SRC}
        ${C_VIEW_SRC}
)
