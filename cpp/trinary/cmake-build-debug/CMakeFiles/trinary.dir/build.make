# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "/Users/viraltaco/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/202.6397.106/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/viraltaco/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/202.6397.106/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/viraltaco/Desktop/projects/Exercism/cpp/trinary

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/viraltaco/Desktop/projects/Exercism/cpp/trinary/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/trinary.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/trinary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/trinary.dir/flags.make

CMakeFiles/trinary.dir/trinary_test.cpp.o: CMakeFiles/trinary.dir/flags.make
CMakeFiles/trinary.dir/trinary_test.cpp.o: ../trinary_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viraltaco/Desktop/projects/Exercism/cpp/trinary/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/trinary.dir/trinary_test.cpp.o"
	/Applications/Xcode-beta.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trinary.dir/trinary_test.cpp.o -c /Users/viraltaco/Desktop/projects/Exercism/cpp/trinary/trinary_test.cpp

CMakeFiles/trinary.dir/trinary_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trinary.dir/trinary_test.cpp.i"
	/Applications/Xcode-beta.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viraltaco/Desktop/projects/Exercism/cpp/trinary/trinary_test.cpp > CMakeFiles/trinary.dir/trinary_test.cpp.i

CMakeFiles/trinary.dir/trinary_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trinary.dir/trinary_test.cpp.s"
	/Applications/Xcode-beta.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viraltaco/Desktop/projects/Exercism/cpp/trinary/trinary_test.cpp -o CMakeFiles/trinary.dir/trinary_test.cpp.s

CMakeFiles/trinary.dir/trinary.cpp.o: CMakeFiles/trinary.dir/flags.make
CMakeFiles/trinary.dir/trinary.cpp.o: ../trinary.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viraltaco/Desktop/projects/Exercism/cpp/trinary/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/trinary.dir/trinary.cpp.o"
	/Applications/Xcode-beta.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trinary.dir/trinary.cpp.o -c /Users/viraltaco/Desktop/projects/Exercism/cpp/trinary/trinary.cpp

CMakeFiles/trinary.dir/trinary.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trinary.dir/trinary.cpp.i"
	/Applications/Xcode-beta.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viraltaco/Desktop/projects/Exercism/cpp/trinary/trinary.cpp > CMakeFiles/trinary.dir/trinary.cpp.i

CMakeFiles/trinary.dir/trinary.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trinary.dir/trinary.cpp.s"
	/Applications/Xcode-beta.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viraltaco/Desktop/projects/Exercism/cpp/trinary/trinary.cpp -o CMakeFiles/trinary.dir/trinary.cpp.s

CMakeFiles/trinary.dir/test/tests-main.cpp.o: CMakeFiles/trinary.dir/flags.make
CMakeFiles/trinary.dir/test/tests-main.cpp.o: ../test/tests-main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viraltaco/Desktop/projects/Exercism/cpp/trinary/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/trinary.dir/test/tests-main.cpp.o"
	/Applications/Xcode-beta.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trinary.dir/test/tests-main.cpp.o -c /Users/viraltaco/Desktop/projects/Exercism/cpp/trinary/test/tests-main.cpp

CMakeFiles/trinary.dir/test/tests-main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trinary.dir/test/tests-main.cpp.i"
	/Applications/Xcode-beta.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viraltaco/Desktop/projects/Exercism/cpp/trinary/test/tests-main.cpp > CMakeFiles/trinary.dir/test/tests-main.cpp.i

CMakeFiles/trinary.dir/test/tests-main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trinary.dir/test/tests-main.cpp.s"
	/Applications/Xcode-beta.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viraltaco/Desktop/projects/Exercism/cpp/trinary/test/tests-main.cpp -o CMakeFiles/trinary.dir/test/tests-main.cpp.s

# Object files for target trinary
trinary_OBJECTS = \
"CMakeFiles/trinary.dir/trinary_test.cpp.o" \
"CMakeFiles/trinary.dir/trinary.cpp.o" \
"CMakeFiles/trinary.dir/test/tests-main.cpp.o"

# External object files for target trinary
trinary_EXTERNAL_OBJECTS =

trinary: CMakeFiles/trinary.dir/trinary_test.cpp.o
trinary: CMakeFiles/trinary.dir/trinary.cpp.o
trinary: CMakeFiles/trinary.dir/test/tests-main.cpp.o
trinary: CMakeFiles/trinary.dir/build.make
trinary: CMakeFiles/trinary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/viraltaco/Desktop/projects/Exercism/cpp/trinary/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable trinary"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/trinary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/trinary.dir/build: trinary

.PHONY : CMakeFiles/trinary.dir/build

CMakeFiles/trinary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/trinary.dir/cmake_clean.cmake
.PHONY : CMakeFiles/trinary.dir/clean

CMakeFiles/trinary.dir/depend:
	cd /Users/viraltaco/Desktop/projects/Exercism/cpp/trinary/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/viraltaco/Desktop/projects/Exercism/cpp/trinary /Users/viraltaco/Desktop/projects/Exercism/cpp/trinary /Users/viraltaco/Desktop/projects/Exercism/cpp/trinary/cmake-build-debug /Users/viraltaco/Desktop/projects/Exercism/cpp/trinary/cmake-build-debug /Users/viraltaco/Desktop/projects/Exercism/cpp/trinary/cmake-build-debug/CMakeFiles/trinary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/trinary.dir/depend
