# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "/Users/viraltaco/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/211.7628.27/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/viraltaco/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/211.7628.27/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/viraltaco/Desktop/Projects/Exercism/cpp/sieve

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/viraltaco/Desktop/Projects/Exercism/cpp/sieve/cmake-build-debug-llvm-12

# Include any dependencies generated for this target.
include CMakeFiles/sieve.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sieve.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sieve.dir/flags.make

CMakeFiles/sieve.dir/sieve_test.cpp.o: CMakeFiles/sieve.dir/flags.make
CMakeFiles/sieve.dir/sieve_test.cpp.o: ../sieve_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viraltaco/Desktop/Projects/Exercism/cpp/sieve/cmake-build-debug-llvm-12/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sieve.dir/sieve_test.cpp.o"
	/usr/local/Cellar/llvm/12.0.1/bin/clang-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sieve.dir/sieve_test.cpp.o -c /Users/viraltaco/Desktop/Projects/Exercism/cpp/sieve/sieve_test.cpp

CMakeFiles/sieve.dir/sieve_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sieve.dir/sieve_test.cpp.i"
	/usr/local/Cellar/llvm/12.0.1/bin/clang-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viraltaco/Desktop/Projects/Exercism/cpp/sieve/sieve_test.cpp > CMakeFiles/sieve.dir/sieve_test.cpp.i

CMakeFiles/sieve.dir/sieve_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sieve.dir/sieve_test.cpp.s"
	/usr/local/Cellar/llvm/12.0.1/bin/clang-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viraltaco/Desktop/Projects/Exercism/cpp/sieve/sieve_test.cpp -o CMakeFiles/sieve.dir/sieve_test.cpp.s

CMakeFiles/sieve.dir/sieve.cpp.o: CMakeFiles/sieve.dir/flags.make
CMakeFiles/sieve.dir/sieve.cpp.o: ../sieve.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viraltaco/Desktop/Projects/Exercism/cpp/sieve/cmake-build-debug-llvm-12/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sieve.dir/sieve.cpp.o"
	/usr/local/Cellar/llvm/12.0.1/bin/clang-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sieve.dir/sieve.cpp.o -c /Users/viraltaco/Desktop/Projects/Exercism/cpp/sieve/sieve.cpp

CMakeFiles/sieve.dir/sieve.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sieve.dir/sieve.cpp.i"
	/usr/local/Cellar/llvm/12.0.1/bin/clang-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viraltaco/Desktop/Projects/Exercism/cpp/sieve/sieve.cpp > CMakeFiles/sieve.dir/sieve.cpp.i

CMakeFiles/sieve.dir/sieve.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sieve.dir/sieve.cpp.s"
	/usr/local/Cellar/llvm/12.0.1/bin/clang-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viraltaco/Desktop/Projects/Exercism/cpp/sieve/sieve.cpp -o CMakeFiles/sieve.dir/sieve.cpp.s

CMakeFiles/sieve.dir/test/tests-main.cpp.o: CMakeFiles/sieve.dir/flags.make
CMakeFiles/sieve.dir/test/tests-main.cpp.o: ../test/tests-main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viraltaco/Desktop/Projects/Exercism/cpp/sieve/cmake-build-debug-llvm-12/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/sieve.dir/test/tests-main.cpp.o"
	/usr/local/Cellar/llvm/12.0.1/bin/clang-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sieve.dir/test/tests-main.cpp.o -c /Users/viraltaco/Desktop/Projects/Exercism/cpp/sieve/test/tests-main.cpp

CMakeFiles/sieve.dir/test/tests-main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sieve.dir/test/tests-main.cpp.i"
	/usr/local/Cellar/llvm/12.0.1/bin/clang-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viraltaco/Desktop/Projects/Exercism/cpp/sieve/test/tests-main.cpp > CMakeFiles/sieve.dir/test/tests-main.cpp.i

CMakeFiles/sieve.dir/test/tests-main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sieve.dir/test/tests-main.cpp.s"
	/usr/local/Cellar/llvm/12.0.1/bin/clang-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viraltaco/Desktop/Projects/Exercism/cpp/sieve/test/tests-main.cpp -o CMakeFiles/sieve.dir/test/tests-main.cpp.s

# Object files for target sieve
sieve_OBJECTS = \
"CMakeFiles/sieve.dir/sieve_test.cpp.o" \
"CMakeFiles/sieve.dir/sieve.cpp.o" \
"CMakeFiles/sieve.dir/test/tests-main.cpp.o"

# External object files for target sieve
sieve_EXTERNAL_OBJECTS =

sieve: CMakeFiles/sieve.dir/sieve_test.cpp.o
sieve: CMakeFiles/sieve.dir/sieve.cpp.o
sieve: CMakeFiles/sieve.dir/test/tests-main.cpp.o
sieve: CMakeFiles/sieve.dir/build.make
sieve: CMakeFiles/sieve.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/viraltaco/Desktop/Projects/Exercism/cpp/sieve/cmake-build-debug-llvm-12/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable sieve"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sieve.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sieve.dir/build: sieve

.PHONY : CMakeFiles/sieve.dir/build

CMakeFiles/sieve.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sieve.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sieve.dir/clean

CMakeFiles/sieve.dir/depend:
	cd /Users/viraltaco/Desktop/Projects/Exercism/cpp/sieve/cmake-build-debug-llvm-12 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/viraltaco/Desktop/Projects/Exercism/cpp/sieve /Users/viraltaco/Desktop/Projects/Exercism/cpp/sieve /Users/viraltaco/Desktop/Projects/Exercism/cpp/sieve/cmake-build-debug-llvm-12 /Users/viraltaco/Desktop/Projects/Exercism/cpp/sieve/cmake-build-debug-llvm-12 /Users/viraltaco/Desktop/Projects/Exercism/cpp/sieve/cmake-build-debug-llvm-12/CMakeFiles/sieve.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sieve.dir/depend

