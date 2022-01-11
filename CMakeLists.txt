cmake_minimum_required(VERSION 3.16)
project(advanced-algorithm)

set(CMAKE_CXX_STANDARD 20)

#Add the google test subdirectory
add_subdirectory(lib/googletest)

#include googletest/include dir
include_directories(lib/googletest/googletest/include)

#include the googlemock/include dir
include_directories(lib/googletest/googlemock/include)

file(GLOB GREEDY_SRC src/greedy/*.cpp src/greedy/*.h src/greedy/*/*.cpp src/greedy/*/*.h)

add_executable(greedy ${GREEDY_SRC})

file(GLOB GREEDY_TEST_SRC src/greedy/*.h src/greedy/*/*.cpp src/greedy/*/*.h)

add_executable(greedy_test ${GREEDY_TEST_SRC} test/greedy_test.cpp)

#Link with GoogleTest
target_link_libraries(greedy_test gtest gtest_main)

#Link with GoogleMock
target_link_libraries(greedy_test gmock gmock_main)