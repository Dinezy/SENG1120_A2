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
CMAKE_COMMAND = /cygdrive/c/Users/TobyD/AppData/Local/JetBrains/CLion2021.1/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/TobyD/AppData/Local/JetBrains/CLion2021.1/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/TobyD/OneDrive - The University Of Newcastle/Desktop/Uni/SENG1120/Assignments/SENG1120_A2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/TobyD/OneDrive - The University Of Newcastle/Desktop/Uni/SENG1120/Assignments/SENG1120_A2/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/SENG1120_A2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SENG1120_A2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SENG1120_A2.dir/flags.make

CMakeFiles/SENG1120_A2.dir/main.cpp.o: CMakeFiles/SENG1120_A2.dir/flags.make
CMakeFiles/SENG1120_A2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/TobyD/OneDrive - The University Of Newcastle/Desktop/Uni/SENG1120/Assignments/SENG1120_A2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SENG1120_A2.dir/main.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SENG1120_A2.dir/main.cpp.o -c "/cygdrive/c/Users/TobyD/OneDrive - The University Of Newcastle/Desktop/Uni/SENG1120/Assignments/SENG1120_A2/main.cpp"

CMakeFiles/SENG1120_A2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SENG1120_A2.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/TobyD/OneDrive - The University Of Newcastle/Desktop/Uni/SENG1120/Assignments/SENG1120_A2/main.cpp" > CMakeFiles/SENG1120_A2.dir/main.cpp.i

CMakeFiles/SENG1120_A2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SENG1120_A2.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/TobyD/OneDrive - The University Of Newcastle/Desktop/Uni/SENG1120/Assignments/SENG1120_A2/main.cpp" -o CMakeFiles/SENG1120_A2.dir/main.cpp.s

# Object files for target SENG1120_A2
SENG1120_A2_OBJECTS = \
"CMakeFiles/SENG1120_A2.dir/main.cpp.o"

# External object files for target SENG1120_A2
SENG1120_A2_EXTERNAL_OBJECTS =

SENG1120_A2.exe: CMakeFiles/SENG1120_A2.dir/main.cpp.o
SENG1120_A2.exe: CMakeFiles/SENG1120_A2.dir/build.make
SENG1120_A2.exe: CMakeFiles/SENG1120_A2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/TobyD/OneDrive - The University Of Newcastle/Desktop/Uni/SENG1120/Assignments/SENG1120_A2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SENG1120_A2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SENG1120_A2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SENG1120_A2.dir/build: SENG1120_A2.exe

.PHONY : CMakeFiles/SENG1120_A2.dir/build

CMakeFiles/SENG1120_A2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SENG1120_A2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SENG1120_A2.dir/clean

CMakeFiles/SENG1120_A2.dir/depend:
	cd "/cygdrive/c/Users/TobyD/OneDrive - The University Of Newcastle/Desktop/Uni/SENG1120/Assignments/SENG1120_A2/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/TobyD/OneDrive - The University Of Newcastle/Desktop/Uni/SENG1120/Assignments/SENG1120_A2" "/cygdrive/c/Users/TobyD/OneDrive - The University Of Newcastle/Desktop/Uni/SENG1120/Assignments/SENG1120_A2" "/cygdrive/c/Users/TobyD/OneDrive - The University Of Newcastle/Desktop/Uni/SENG1120/Assignments/SENG1120_A2/cmake-build-debug" "/cygdrive/c/Users/TobyD/OneDrive - The University Of Newcastle/Desktop/Uni/SENG1120/Assignments/SENG1120_A2/cmake-build-debug" "/cygdrive/c/Users/TobyD/OneDrive - The University Of Newcastle/Desktop/Uni/SENG1120/Assignments/SENG1120_A2/cmake-build-debug/CMakeFiles/SENG1120_A2.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/SENG1120_A2.dir/depend

