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
CMAKE_SOURCE_DIR = "D:\Level 3 Spring\interview_Proplems\Best Time to Buy and Sell Stock"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Level 3 Spring\interview_Proplems\Best Time to Buy and Sell Stock\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/flags.make

CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/main.cpp.obj: CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/flags.make
CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Level 3 Spring\interview_Proplems\Best Time to Buy and Sell Stock\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Best_Time_to_Buy_and_Sell_Stock.dir\main.cpp.obj -c "D:\Level 3 Spring\interview_Proplems\Best Time to Buy and Sell Stock\main.cpp"

CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Level 3 Spring\interview_Proplems\Best Time to Buy and Sell Stock\main.cpp" > CMakeFiles\Best_Time_to_Buy_and_Sell_Stock.dir\main.cpp.i

CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Level 3 Spring\interview_Proplems\Best Time to Buy and Sell Stock\main.cpp" -o CMakeFiles\Best_Time_to_Buy_and_Sell_Stock.dir\main.cpp.s

# Object files for target Best_Time_to_Buy_and_Sell_Stock
Best_Time_to_Buy_and_Sell_Stock_OBJECTS = \
"CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/main.cpp.obj"

# External object files for target Best_Time_to_Buy_and_Sell_Stock
Best_Time_to_Buy_and_Sell_Stock_EXTERNAL_OBJECTS =

Best_Time_to_Buy_and_Sell_Stock.exe: CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/main.cpp.obj
Best_Time_to_Buy_and_Sell_Stock.exe: CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/build.make
Best_Time_to_Buy_and_Sell_Stock.exe: CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/linklibs.rsp
Best_Time_to_Buy_and_Sell_Stock.exe: CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/objects1.rsp
Best_Time_to_Buy_and_Sell_Stock.exe: CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Level 3 Spring\interview_Proplems\Best Time to Buy and Sell Stock\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Best_Time_to_Buy_and_Sell_Stock.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Best_Time_to_Buy_and_Sell_Stock.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/build: Best_Time_to_Buy_and_Sell_Stock.exe

.PHONY : CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/build

CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Best_Time_to_Buy_and_Sell_Stock.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/clean

CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Level 3 Spring\interview_Proplems\Best Time to Buy and Sell Stock" "D:\Level 3 Spring\interview_Proplems\Best Time to Buy and Sell Stock" "D:\Level 3 Spring\interview_Proplems\Best Time to Buy and Sell Stock\cmake-build-debug" "D:\Level 3 Spring\interview_Proplems\Best Time to Buy and Sell Stock\cmake-build-debug" "D:\Level 3 Spring\interview_Proplems\Best Time to Buy and Sell Stock\cmake-build-debug\CMakeFiles\Best_Time_to_Buy_and_Sell_Stock.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Best_Time_to_Buy_and_Sell_Stock.dir/depend
