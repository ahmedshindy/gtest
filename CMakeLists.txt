cmake_minimum_required(VERSION 3.16)
project(gtest)

include_directories(${GTEST_INCLUDE_DIRS})
find_package(GTest REQUIRED)
add_executable(main.elf main.cpp)
target_link_libraries(main.elf ${GTEST_LIBRARIES})

enable_testing()
add_test(add a.out)