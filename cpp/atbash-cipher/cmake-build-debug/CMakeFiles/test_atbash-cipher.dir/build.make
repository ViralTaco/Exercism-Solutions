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
CMAKE_COMMAND = "/Users/viraltaco/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/211.7142.21/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/viraltaco/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/211.7142.21/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/viraltaco/Desktop/projects/Exercism/cpp/atbash-cipher

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/viraltaco/Desktop/projects/Exercism/cpp/atbash-cipher/cmake-build-debug

# Utility rule file for test_atbash-cipher.

# Include the progress variables for this target.
include CMakeFiles/test_atbash-cipher.dir/progress.make

CMakeFiles/test_atbash-cipher: atbash-cipher
	./atbash-cipher

test_atbash-cipher: CMakeFiles/test_atbash-cipher
test_atbash-cipher: CMakeFiles/test_atbash-cipher.dir/build.make

.PHONY : test_atbash-cipher

# Rule to build all files generated by this target.
CMakeFiles/test_atbash-cipher.dir/build: test_atbash-cipher

.PHONY : CMakeFiles/test_atbash-cipher.dir/build

CMakeFiles/test_atbash-cipher.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_atbash-cipher.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_atbash-cipher.dir/clean

CMakeFiles/test_atbash-cipher.dir/depend:
	cd /Users/viraltaco/Desktop/projects/Exercism/cpp/atbash-cipher/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/viraltaco/Desktop/projects/Exercism/cpp/atbash-cipher /Users/viraltaco/Desktop/projects/Exercism/cpp/atbash-cipher /Users/viraltaco/Desktop/projects/Exercism/cpp/atbash-cipher/cmake-build-debug /Users/viraltaco/Desktop/projects/Exercism/cpp/atbash-cipher/cmake-build-debug /Users/viraltaco/Desktop/projects/Exercism/cpp/atbash-cipher/cmake-build-debug/CMakeFiles/test_atbash-cipher.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_atbash-cipher.dir/depend

