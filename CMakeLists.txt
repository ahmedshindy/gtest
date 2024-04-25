cmake_minimum_required(VERSION 3.16)
project(gtest)
include_directories(${GTEST_INCLUDE_DIRS})
find_package(GTest REQUIRED)
add_executable(a.out main.cpp)
target_link_libraries(a.out ${GTEST_LIBRARIES})

enable_testing()
add_test(add a.out)