# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks/src

# Include any dependencies generated for this target.
include CMakeFiles/tasks.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tasks.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tasks.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tasks.dir/flags.make

CMakeFiles/tasks.dir/task.cc.o: CMakeFiles/tasks.dir/flags.make
CMakeFiles/tasks.dir/task.cc.o: task.cc
CMakeFiles/tasks.dir/task.cc.o: CMakeFiles/tasks.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tasks.dir/task.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tasks.dir/task.cc.o -MF CMakeFiles/tasks.dir/task.cc.o.d -o CMakeFiles/tasks.dir/task.cc.o -c /home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks/src/task.cc

CMakeFiles/tasks.dir/task.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tasks.dir/task.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks/src/task.cc > CMakeFiles/tasks.dir/task.cc.i

CMakeFiles/tasks.dir/task.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tasks.dir/task.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks/src/task.cc -o CMakeFiles/tasks.dir/task.cc.s

CMakeFiles/tasks.dir/tasks.cc.o: CMakeFiles/tasks.dir/flags.make
CMakeFiles/tasks.dir/tasks.cc.o: tasks.cc
CMakeFiles/tasks.dir/tasks.cc.o: CMakeFiles/tasks.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tasks.dir/tasks.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tasks.dir/tasks.cc.o -MF CMakeFiles/tasks.dir/tasks.cc.o.d -o CMakeFiles/tasks.dir/tasks.cc.o -c /home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks/src/tasks.cc

CMakeFiles/tasks.dir/tasks.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tasks.dir/tasks.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks/src/tasks.cc > CMakeFiles/tasks.dir/tasks.cc.i

CMakeFiles/tasks.dir/tasks.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tasks.dir/tasks.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks/src/tasks.cc -o CMakeFiles/tasks.dir/tasks.cc.s

# Object files for target tasks
tasks_OBJECTS = \
"CMakeFiles/tasks.dir/task.cc.o" \
"CMakeFiles/tasks.dir/tasks.cc.o"

# External object files for target tasks
tasks_EXTERNAL_OBJECTS =

/home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks/build/tasks: CMakeFiles/tasks.dir/task.cc.o
/home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks/build/tasks: CMakeFiles/tasks.dir/tasks.cc.o
/home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks/build/tasks: CMakeFiles/tasks.dir/build.make
/home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks/build/tasks: CMakeFiles/tasks.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable /home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks/build/tasks"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tasks.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tasks.dir/build: /home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks/build/tasks
.PHONY : CMakeFiles/tasks.dir/build

CMakeFiles/tasks.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tasks.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tasks.dir/clean

CMakeFiles/tasks.dir/depend:
	cd /home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks /home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks /home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks/src /home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks/src /home/usuario/1_Ingenier-a_Inform-tica/INFORMÁTICA_BÁSICA/problemas/ejercicios_clases/tasks/src/CMakeFiles/tasks.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/tasks.dir/depend

