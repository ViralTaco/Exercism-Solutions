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
CMAKE_COMMAND = "/Users/viraltaco/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/211.7442.42/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/viraltaco/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/211.7442.42/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/viraltaco/Desktop/Projects/Exercism/cpp/space-age

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/viraltaco/Desktop/Projects/Exercism/cpp/space-age/cmake-build-debug-system

# Utility rule file for test_spage_age.

# Include the progress variables for this target.
include CMakeFiles/test_spage_age.dir/progress.make

CMakeFiles/test_spage_age: spage_age
	./spage_age

test_spage_age: CMakeFiles/test_spage_age
test_spage_age: CMakeFiles/test_spage_age.dir/build.make

.PHONY : test_spage_age

# Rule to build all files generated by this target.
CMakeFiles/test_spage_age.dir/build: test_spage_age

.PHONY : CMakeFiles/test_spage_age.dir/build

CMakeFiles/test_spage_age.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_spage_age.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_spage_age.dir/clean

CMakeFiles/test_spage_age.dir/depend:
	cd /Users/viraltaco/Desktop/Projects/Exercism/cpp/space-age/cmake-build-debug-system && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/viraltaco/Desktop/Projects/Exercism/cpp/space-age /Users/viraltaco/Desktop/Projects/Exercism/cpp/space-age /Users/viraltaco/Desktop/Projects/Exercism/cpp/space-age/cmake-build-debug-system /Users/viraltaco/Desktop/Projects/Exercism/cpp/space-age/cmake-build-debug-system /Users/viraltaco/Desktop/Projects/Exercism/cpp/space-age/cmake-build-debug-system/CMakeFiles/test_spage_age.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_spage_age.dir/depend
