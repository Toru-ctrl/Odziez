# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\SirMi\CLionProjects\Odziez

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\SirMi\CLionProjects\Odziez\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Odziez.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Odziez.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Odziez.dir/flags.make

CMakeFiles/Odziez.dir/main.cpp.obj: CMakeFiles/Odziez.dir/flags.make
CMakeFiles/Odziez.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\SirMi\CLionProjects\Odziez\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Odziez.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Odziez.dir\main.cpp.obj -c C:\Users\SirMi\CLionProjects\Odziez\main.cpp

CMakeFiles/Odziez.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Odziez.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\SirMi\CLionProjects\Odziez\main.cpp > CMakeFiles\Odziez.dir\main.cpp.i

CMakeFiles/Odziez.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Odziez.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\SirMi\CLionProjects\Odziez\main.cpp -o CMakeFiles\Odziez.dir\main.cpp.s

CMakeFiles/Odziez.dir/produkty.cpp.obj: CMakeFiles/Odziez.dir/flags.make
CMakeFiles/Odziez.dir/produkty.cpp.obj: ../produkty.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\SirMi\CLionProjects\Odziez\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Odziez.dir/produkty.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Odziez.dir\produkty.cpp.obj -c C:\Users\SirMi\CLionProjects\Odziez\produkty.cpp

CMakeFiles/Odziez.dir/produkty.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Odziez.dir/produkty.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\SirMi\CLionProjects\Odziez\produkty.cpp > CMakeFiles\Odziez.dir\produkty.cpp.i

CMakeFiles/Odziez.dir/produkty.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Odziez.dir/produkty.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\SirMi\CLionProjects\Odziez\produkty.cpp -o CMakeFiles\Odziez.dir\produkty.cpp.s

# Object files for target Odziez
Odziez_OBJECTS = \
"CMakeFiles/Odziez.dir/main.cpp.obj" \
"CMakeFiles/Odziez.dir/produkty.cpp.obj"

# External object files for target Odziez
Odziez_EXTERNAL_OBJECTS =

Odziez.exe: CMakeFiles/Odziez.dir/main.cpp.obj
Odziez.exe: CMakeFiles/Odziez.dir/produkty.cpp.obj
Odziez.exe: CMakeFiles/Odziez.dir/build.make
Odziez.exe: CMakeFiles/Odziez.dir/linklibs.rsp
Odziez.exe: CMakeFiles/Odziez.dir/objects1.rsp
Odziez.exe: CMakeFiles/Odziez.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\SirMi\CLionProjects\Odziez\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Odziez.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Odziez.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Odziez.dir/build: Odziez.exe

.PHONY : CMakeFiles/Odziez.dir/build

CMakeFiles/Odziez.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Odziez.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Odziez.dir/clean

CMakeFiles/Odziez.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\SirMi\CLionProjects\Odziez C:\Users\SirMi\CLionProjects\Odziez C:\Users\SirMi\CLionProjects\Odziez\cmake-build-debug C:\Users\SirMi\CLionProjects\Odziez\cmake-build-debug C:\Users\SirMi\CLionProjects\Odziez\cmake-build-debug\CMakeFiles\Odziez.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Odziez.dir/depend
