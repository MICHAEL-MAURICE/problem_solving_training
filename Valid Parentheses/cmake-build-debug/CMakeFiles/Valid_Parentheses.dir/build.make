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
CMAKE_SOURCE_DIR = "D:\Level 3 Spring\interview_Proplems\Valid Parentheses"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Level 3 Spring\interview_Proplems\Valid Parentheses\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Valid_Parentheses.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Valid_Parentheses.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Valid_Parentheses.dir/flags.make

CMakeFiles/Valid_Parentheses.dir/main.cpp.obj: CMakeFiles/Valid_Parentheses.dir/flags.make
CMakeFiles/Valid_Parentheses.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Level 3 Spring\interview_Proplems\Valid Parentheses\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Valid_Parentheses.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Valid_Parentheses.dir\main.cpp.obj -c "D:\Level 3 Spring\interview_Proplems\Valid Parentheses\main.cpp"

CMakeFiles/Valid_Parentheses.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Valid_Parentheses.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Level 3 Spring\interview_Proplems\Valid Parentheses\main.cpp" > CMakeFiles\Valid_Parentheses.dir\main.cpp.i

CMakeFiles/Valid_Parentheses.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Valid_Parentheses.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Level 3 Spring\interview_Proplems\Valid Parentheses\main.cpp" -o CMakeFiles\Valid_Parentheses.dir\main.cpp.s

# Object files for target Valid_Parentheses
Valid_Parentheses_OBJECTS = \
"CMakeFiles/Valid_Parentheses.dir/main.cpp.obj"

# External object files for target Valid_Parentheses
Valid_Parentheses_EXTERNAL_OBJECTS =

Valid_Parentheses.exe: CMakeFiles/Valid_Parentheses.dir/main.cpp.obj
Valid_Parentheses.exe: CMakeFiles/Valid_Parentheses.dir/build.make
Valid_Parentheses.exe: CMakeFiles/Valid_Parentheses.dir/linklibs.rsp
Valid_Parentheses.exe: CMakeFiles/Valid_Parentheses.dir/objects1.rsp
Valid_Parentheses.exe: CMakeFiles/Valid_Parentheses.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Level 3 Spring\interview_Proplems\Valid Parentheses\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Valid_Parentheses.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Valid_Parentheses.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Valid_Parentheses.dir/build: Valid_Parentheses.exe

.PHONY : CMakeFiles/Valid_Parentheses.dir/build

CMakeFiles/Valid_Parentheses.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Valid_Parentheses.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Valid_Parentheses.dir/clean

CMakeFiles/Valid_Parentheses.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Level 3 Spring\interview_Proplems\Valid Parentheses" "D:\Level 3 Spring\interview_Proplems\Valid Parentheses" "D:\Level 3 Spring\interview_Proplems\Valid Parentheses\cmake-build-debug" "D:\Level 3 Spring\interview_Proplems\Valid Parentheses\cmake-build-debug" "D:\Level 3 Spring\interview_Proplems\Valid Parentheses\cmake-build-debug\CMakeFiles\Valid_Parentheses.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Valid_Parentheses.dir/depend

