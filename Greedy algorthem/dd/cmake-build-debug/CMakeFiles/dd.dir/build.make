# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Level 3 Spring\Greedy algorthem\dd"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Level 3 Spring\Greedy algorthem\dd\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/dd.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dd.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dd.dir/flags.make

CMakeFiles/dd.dir/main.cpp.obj: CMakeFiles/dd.dir/flags.make
CMakeFiles/dd.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Level 3 Spring\Greedy algorthem\dd\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dd.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\dd.dir\main.cpp.obj -c "D:\Level 3 Spring\Greedy algorthem\dd\main.cpp"

CMakeFiles/dd.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dd.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Level 3 Spring\Greedy algorthem\dd\main.cpp" > CMakeFiles\dd.dir\main.cpp.i

CMakeFiles/dd.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dd.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Level 3 Spring\Greedy algorthem\dd\main.cpp" -o CMakeFiles\dd.dir\main.cpp.s

# Object files for target dd
dd_OBJECTS = \
"CMakeFiles/dd.dir/main.cpp.obj"

# External object files for target dd
dd_EXTERNAL_OBJECTS =

dd.exe: CMakeFiles/dd.dir/main.cpp.obj
dd.exe: CMakeFiles/dd.dir/build.make
dd.exe: CMakeFiles/dd.dir/linklibs.rsp
dd.exe: CMakeFiles/dd.dir/objects1.rsp
dd.exe: CMakeFiles/dd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Level 3 Spring\Greedy algorthem\dd\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dd.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\dd.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dd.dir/build: dd.exe

.PHONY : CMakeFiles/dd.dir/build

CMakeFiles/dd.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dd.dir\cmake_clean.cmake
.PHONY : CMakeFiles/dd.dir/clean

CMakeFiles/dd.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Level 3 Spring\Greedy algorthem\dd" "D:\Level 3 Spring\Greedy algorthem\dd" "D:\Level 3 Spring\Greedy algorthem\dd\cmake-build-debug" "D:\Level 3 Spring\Greedy algorthem\dd\cmake-build-debug" "D:\Level 3 Spring\Greedy algorthem\dd\cmake-build-debug\CMakeFiles\dd.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/dd.dir/depend

