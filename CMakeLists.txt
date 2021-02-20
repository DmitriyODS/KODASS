cmake_minimum_required(VERSION 3.17)

project(testing_lib)

set(SOURCE_TEST_EXE main.cpp)

add_executable(testing_lib ${SOURCE_TEST_EXE})

include_directories(CManager)

include_directories(ConsoleAPI)

add_subdirectory(CManager)

add_subdirectory(ConsoleAPI)

target_link_libraries(testing_lib ConsoleAPI CManager)
