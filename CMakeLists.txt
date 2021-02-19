cmake_minimum_required(VERSION 3.17)
project(KODASS)

set(CMAKE_CXX_STANDARD 20)

include_directories(CGUI/View)
include_directories(CGUI/CWidgets)
include_directories(CGUI/CScreen)
include_directories(CGUI/Context)
include_directories(CGUI/Theme)
add_subdirectory(CGUI/View)
add_subdirectory(CGUI/CWidgets)
add_subdirectory(CGUI/CScreen)
add_subdirectory(CGUI/ConsoleAPI)
add_subdirectory(CGUI/Context)
add_subdirectory(CGUI/Theme)

add_executable(Test main.cpp)

target_link_libraries(Test CWidgets CManager Context Theme)