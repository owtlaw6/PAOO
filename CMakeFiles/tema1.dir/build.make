# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/diana/Downloads/tema1PAOO

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/diana/Downloads/tema1PAOO

# Include any dependencies generated for this target.
include CMakeFiles/tema1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tema1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tema1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tema1.dir/flags.make

CMakeFiles/tema1.dir/src/main.cpp.o: CMakeFiles/tema1.dir/flags.make
CMakeFiles/tema1.dir/src/main.cpp.o: src/main.cpp
CMakeFiles/tema1.dir/src/main.cpp.o: CMakeFiles/tema1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diana/Downloads/tema1PAOO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tema1.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tema1.dir/src/main.cpp.o -MF CMakeFiles/tema1.dir/src/main.cpp.o.d -o CMakeFiles/tema1.dir/src/main.cpp.o -c /home/diana/Downloads/tema1PAOO/src/main.cpp

CMakeFiles/tema1.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tema1.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diana/Downloads/tema1PAOO/src/main.cpp > CMakeFiles/tema1.dir/src/main.cpp.i

CMakeFiles/tema1.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tema1.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diana/Downloads/tema1PAOO/src/main.cpp -o CMakeFiles/tema1.dir/src/main.cpp.s

# Object files for target tema1
tema1_OBJECTS = \
"CMakeFiles/tema1.dir/src/main.cpp.o"

# External object files for target tema1
tema1_EXTERNAL_OBJECTS =

tema1: CMakeFiles/tema1.dir/src/main.cpp.o
tema1: CMakeFiles/tema1.dir/build.make
tema1: CMakeFiles/tema1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/diana/Downloads/tema1PAOO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tema1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tema1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tema1.dir/build: tema1
.PHONY : CMakeFiles/tema1.dir/build

CMakeFiles/tema1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tema1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tema1.dir/clean

CMakeFiles/tema1.dir/depend:
	cd /home/diana/Downloads/tema1PAOO && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diana/Downloads/tema1PAOO /home/diana/Downloads/tema1PAOO /home/diana/Downloads/tema1PAOO /home/diana/Downloads/tema1PAOO /home/diana/Downloads/tema1PAOO/CMakeFiles/tema1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tema1.dir/depend

