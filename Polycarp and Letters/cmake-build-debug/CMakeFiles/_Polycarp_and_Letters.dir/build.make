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
CMAKE_SOURCE_DIR = "D:\Level 3 Spring\ Polycarp and Letters"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Level 3 Spring\ Polycarp and Letters\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/_Polycarp_and_Letters.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/_Polycarp_and_Letters.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/_Polycarp_and_Letters.dir/flags.make

CMakeFiles/_Polycarp_and_Letters.dir/main.cpp.obj: CMakeFiles/_Polycarp_and_Letters.dir/flags.make
CMakeFiles/_Polycarp_and_Letters.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Level 3 Spring\ Polycarp and Letters\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/_Polycarp_and_Letters.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\_Polycarp_and_Letters.dir\main.cpp.obj -c "D:\Level 3 Spring\ Polycarp and Letters\main.cpp"

CMakeFiles/_Polycarp_and_Letters.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_Polycarp_and_Letters.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Level 3 Spring\ Polycarp and Letters\main.cpp" > CMakeFiles\_Polycarp_and_Letters.dir\main.cpp.i

CMakeFiles/_Polycarp_and_Letters.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_Polycarp_and_Letters.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Level 3 Spring\ Polycarp and Letters\main.cpp" -o CMakeFiles\_Polycarp_and_Letters.dir\main.cpp.s

# Object files for target _Polycarp_and_Letters
_Polycarp_and_Letters_OBJECTS = \
"CMakeFiles/_Polycarp_and_Letters.dir/main.cpp.obj"

# External object files for target _Polycarp_and_Letters
_Polycarp_and_Letters_EXTERNAL_OBJECTS =

_Polycarp_and_Letters.exe: CMakeFiles/_Polycarp_and_Letters.dir/main.cpp.obj
_Polycarp_and_Letters.exe: CMakeFiles/_Polycarp_and_Letters.dir/build.make
_Polycarp_and_Letters.exe: CMakeFiles/_Polycarp_and_Letters.dir/linklibs.rsp
_Polycarp_and_Letters.exe: CMakeFiles/_Polycarp_and_Letters.dir/objects1.rsp
_Polycarp_and_Letters.exe: CMakeFiles/_Polycarp_and_Letters.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Level 3 Spring\ Polycarp and Letters\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable _Polycarp_and_Letters.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\_Polycarp_and_Letters.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/_Polycarp_and_Letters.dir/build: _Polycarp_and_Letters.exe

.PHONY : CMakeFiles/_Polycarp_and_Letters.dir/build

CMakeFiles/_Polycarp_and_Letters.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\_Polycarp_and_Letters.dir\cmake_clean.cmake
.PHONY : CMakeFiles/_Polycarp_and_Letters.dir/clean

CMakeFiles/_Polycarp_and_Letters.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Level 3 Spring\ Polycarp and Letters" "D:\Level 3 Spring\ Polycarp and Letters" "D:\Level 3 Spring\ Polycarp and Letters\cmake-build-debug" "D:\Level 3 Spring\ Polycarp and Letters\cmake-build-debug" "D:\Level 3 Spring\ Polycarp and Letters\cmake-build-debug\CMakeFiles\_Polycarp_and_Letters.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/_Polycarp_and_Letters.dir/depend

