# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Danik/CLionProjects/ITS/FabricMethod

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Danik/CLionProjects/ITS/FabricMethod/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FabricMethod.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/FabricMethod.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FabricMethod.dir/flags.make

CMakeFiles/FabricMethod.dir/main.cpp.o: CMakeFiles/FabricMethod.dir/flags.make
CMakeFiles/FabricMethod.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Danik/CLionProjects/ITS/FabricMethod/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FabricMethod.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FabricMethod.dir/main.cpp.o -c /Users/Danik/CLionProjects/ITS/FabricMethod/main.cpp

CMakeFiles/FabricMethod.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FabricMethod.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Danik/CLionProjects/ITS/FabricMethod/main.cpp > CMakeFiles/FabricMethod.dir/main.cpp.i

CMakeFiles/FabricMethod.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FabricMethod.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Danik/CLionProjects/ITS/FabricMethod/main.cpp -o CMakeFiles/FabricMethod.dir/main.cpp.s

# Object files for target FabricMethod
FabricMethod_OBJECTS = \
"CMakeFiles/FabricMethod.dir/main.cpp.o"

# External object files for target FabricMethod
FabricMethod_EXTERNAL_OBJECTS =

FabricMethod: CMakeFiles/FabricMethod.dir/main.cpp.o
FabricMethod: CMakeFiles/FabricMethod.dir/build.make
FabricMethod: CMakeFiles/FabricMethod.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Danik/CLionProjects/ITS/FabricMethod/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable FabricMethod"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FabricMethod.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FabricMethod.dir/build: FabricMethod
.PHONY : CMakeFiles/FabricMethod.dir/build

CMakeFiles/FabricMethod.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FabricMethod.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FabricMethod.dir/clean

CMakeFiles/FabricMethod.dir/depend:
	cd /Users/Danik/CLionProjects/ITS/FabricMethod/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Danik/CLionProjects/ITS/FabricMethod /Users/Danik/CLionProjects/ITS/FabricMethod /Users/Danik/CLionProjects/ITS/FabricMethod/cmake-build-debug /Users/Danik/CLionProjects/ITS/FabricMethod/cmake-build-debug /Users/Danik/CLionProjects/ITS/FabricMethod/cmake-build-debug/CMakeFiles/FabricMethod.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FabricMethod.dir/depend

