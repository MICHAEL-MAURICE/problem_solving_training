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
CMAKE_SOURCE_DIR = "D:\Level 3 Spring\stls\Error Correction"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Level 3 Spring\stls\Error Correction\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Error_Correction.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Error_Correction.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Error_Correction.dir/flags.make

CMakeFiles/Error_Correction.dir/main.cpp.obj: CMakeFiles/Error_Correction.dir/flags.make
CMakeFiles/Error_Correction.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Level 3 Spring\stls\Error Correction\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Error_Correction.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Error_Correction.dir\main.cpp.obj -c "D:\Level 3 Spring\stls\Error Correction\main.cpp"

CMakeFiles/Error_Correction.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Error_Correction.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Level 3 Spring\stls\Error Correction\main.cpp" > CMakeFiles\Error_Correction.dir\main.cpp.i

CMakeFiles/Error_Correction.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Error_Correction.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Level 3 Spring\stls\Error Correction\main.cpp" -o CMakeFiles\Error_Correction.dir\main.cpp.s

# Object files for target Error_Correction
Error_Correction_OBJECTS = \
"CMakeFiles/Error_Correction.dir/main.cpp.obj"

# External object files for target Error_Correction
Error_Correction_EXTERNAL_OBJECTS =

Error_Correction.exe: CMakeFiles/Error_Correction.dir/main.cpp.obj
Error_Correction.exe: CMakeFiles/Error_Correction.dir/build.make
Error_Correction.exe: CMakeFiles/Error_Correction.dir/linklibs.rsp
Error_Correction.exe: CMakeFiles/Error_Correction.dir/objects1.rsp
Error_Correction.exe: CMakeFiles/Error_Correction.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Level 3 Spring\stls\Error Correction\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Error_Correction.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Error_Correction.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Error_Correction.dir/build: Error_Correction.exe

.PHONY : CMakeFiles/Error_Correction.dir/build

CMakeFiles/Error_Correction.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Error_Correction.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Error_Correction.dir/clean

CMakeFiles/Error_Correction.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Level 3 Spring\stls\Error Correction" "D:\Level 3 Spring\stls\Error Correction" "D:\Level 3 Spring\stls\Error Correction\cmake-build-debug" "D:\Level 3 Spring\stls\Error Correction\cmake-build-debug" "D:\Level 3 Spring\stls\Error Correction\cmake-build-debug\CMakeFiles\Error_Correction.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Error_Correction.dir/depend

