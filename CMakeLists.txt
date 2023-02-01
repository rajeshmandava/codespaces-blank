cmake_minimum_required(VERSION 3.16)

project(testrun LANGUAGES CXX)
find_library(gtest NAMES libgtest.a)
find_library(thread NAMES pthread.a)
find_library(gtest_main NAMES libgtest_main.a)
add_executable(test main.cpp)
target_link_libraries(test gtest gtest_main pthread)

