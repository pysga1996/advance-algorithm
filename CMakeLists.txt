cmake_minimum_required(VERSION 3.16)
project(advanced-algorithms)

set(CMAKE_CXX_STANDARD 20)

#Add the google test subdirectory
add_subdirectory(lib/googletest)

#include googletest/include dir
include_directories(lib/googletest/googletest/include)

#include the googlemock/include dir
include_directories(lib/googletest/googlemock/include)

file(GLOB ADVANCED_ALGORITHMS_SRC src/*.cpp src/*/*.cpp include/*.h)

add_executable(advanced-algorithms ${ADVANCED_ALGORITHMS_SRC})

file(GLOB ADVANCED_ALGORITHMS_TEST src/*.cpp src/*/*.cpp include/*.h test/*.cpp)

add_executable(advanced-algorithms-test ${ADVANCED_ALGORITHMS_TEST})

#Link with GoogleTest
target_link_libraries(advanced-algorithms-test gtest gtest_main)

#Link with GoogleMock
target_link_libraries(advanced-algorithms-test gmock gmock_main)