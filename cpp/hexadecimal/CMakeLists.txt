cmake_minimum_required(VERSION 3.5.1)
project(hexadecimal CXX)
set(CMAKE_BUILD_TYPE Debug)

add_executable(hexadecimal
			   hexadecimal.hpp
			   hexadecimal_test.cpp
			   )

if("${CMAKE_CXX_COMPILER_ID}" MATCHES "(GNU)")
    set(flags "-Wall -Wextra -Wpedantic -Werror")
elseif("${CMAKE_CXX_COMPILER_ID}" MATCHES "(Clang)")
	set(flags "-Weverything -Wno-c++98-compat-pedantic -Wno-c++20-compat")
endif()

set_target_properties(hexadecimal PROPERTIES
					  CXX_STANDARD 20
					  CXX_STANDARD_REQUIRED OFF
					  CXX_EXTENSIONS OFF
					  COMPILE_FLAGS "${flags}"
					  )

if(${EXERCISM_RUN_ALL_TESTS})
	target_compile_definitions(hexadecimal PRIVATE EXERCISM_RUN_ALL_TESTS)
endif()

add_custom_target(test_hexadecimal ALL DEPENDS hexadecimal COMMAND hexadecimal)
