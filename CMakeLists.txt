cmake_minimum_required(VERSION 3.17)
project(KODASS)

set(CMAKE_CXX_STANDARD 20)

include_directories(CGUI/View)
include_directories(CGUI/CWidgets)
include_directories(CGUI/CScreen)
add_subdirectory(CGUI/View)
add_subdirectory(CGUI/CWidgets)
add_subdirectory(CGUI/CScreen)
add_subdirectory(CGUI/CManager)

add_executable(Test main.cpp CGUI/Themes/Color/Color.cpp CGUI/Themes/Color/Color.h)

target_link_libraries(Test CWidgets CManager)