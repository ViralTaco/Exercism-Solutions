cmake_minimum_required(VERSION 3.5.1)
project(space_age CXX)
set(CMAKE_BUILD_TYPE Debug)

set(file "space_age")
if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${file}.cpp)
	set(file_cpp ${file}.cpp)
else()
	set(file_cpp "")
endif()

add_executable(spage_age
			   space_age.hpp
			   space_age_test.cpp
			   test/tests-main.cpp
			   )

if("${CMAKE_CXX_COMPILER_ID}" MATCHES "(GNU)")
    set(flags "-Wall -Wextra -Wpedantic -Werror")
elseif("${CMAKE_CXX_COMPILER_ID}" MATCHES "(Clang)")
	set(flags "-Werror -Weverything -Wno-padded -Wno-c++98-compat-pedantic -Wno-c++-compat")
endif()

set_target_properties(spage_age PROPERTIES
					  CXX_STANDARD 20
					  CXX_STANDARD_REQUIRED OFF
					  CXX_EXTENSIONS OFF
					  COMPILE_FLAGS "${flags}"
					  )

if(${EXERCISM_RUN_ALL_TESTS})
	target_compile_definitions(spage_age PRIVATE EXERCISM_RUN_ALL_TESTS)
endif()

add_custom_target(test_spage_age ALL DEPENDS spage_age COMMAND spage_age)
