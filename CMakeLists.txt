cmake_minimum_required(VERSION 3.16)
project(advanced-algorithms)

set(CMAKE_CXX_STANDARD 20)

#Add the google test subdirectory
add_subdirectory(lib/googletest)

#include googletest/include dir
include_directories(lib/googletest/googletest/include)

#include the googlemock/include dir
include_directories(lib/googletest/googlemock/include)
include_directories(lib/cpp-commons)
include_directories(include)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

link_directories(lib/cpp-commons)

# m is lib definition of <math.h>
set(WINDOWS_LIB cpp-commons.dll.a m)

file(GLOB ADVANCED_ALGORITHMS_SRC src/*.cpp src/*/*.cpp include/*.h lib/cpp-commons/*.h)

add_executable(advanced-algorithms ${ADVANCED_ALGORITHMS_SRC}
        src/d_array/d_array.cpp
        src/d_array/sum_array.cpp)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/menu/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/menu)

file(GLOB ADVANCED_ALGORITHMS_TEST src/*.cpp src/*/*.cpp include/*.h lib/cpp-commons/*.h test/*.cpp)

add_executable(advanced-algorithms-test ${ADVANCED_ALGORITHMS_TEST})

target_link_libraries(advanced-algorithms ${WINDOWS_LIB})

#Link with GoogleTest
target_link_libraries(advanced-algorithms-test gtest gtest_main)

#Link with GoogleMock
target_link_libraries(advanced-algorithms-test gmock gmock_main)