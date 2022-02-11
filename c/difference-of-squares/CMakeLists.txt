cmake_minimum_required(VERSION 3.20)
project(difference_of_squares C)

set(CMAKE_C_STANDARD 11)

include_directories(src)
include_directories(test/vendor)

add_executable(difference_of_squares
			   src/difference_of_squares.c
			   src/difference_of_squares.h
			   test/vendor/unity.c
			   test/vendor/unity.h
			   test/vendor/unity_internals.h
			   test/test_difference_of_squares.c)
