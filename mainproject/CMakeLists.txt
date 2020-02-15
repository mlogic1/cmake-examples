cmake_minimum_required(VERSION 3.10.2)

project(mainproject CXX)

include_directories(${School_INCLUDE_DIRS})

add_executable(app ./src/main.cpp)

target_link_libraries(app School)