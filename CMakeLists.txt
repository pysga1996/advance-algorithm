cmake_minimum_required(VERSION 3.16)
project(advanced-algorithm)

set(CMAKE_CXX_STANDARD 20)

file(GLOB GREEDY_SRC greedy/*.cpp greedy/*.h greedy/*/*.cpp greedy/*/*.h)

add_executable(greedy ${GREEDY_SRC})