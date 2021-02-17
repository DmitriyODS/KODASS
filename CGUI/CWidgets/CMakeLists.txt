cmake_minimum_required(VERSION 3.17)
project(CWidgets)

set(CMAKE_CXX_STANDARD 20)

# Переменные, хранящие файлы библиотек
set(C_TEXTVIEW_SRC CTextView.h CTextView.cpp)


add_library(
        CWidgets
        ${C_TEXTVIEW_SRC}
)
