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
CMAKE_SOURCE_DIR = /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild

# Utility rule file for http-populate.

# Include any custom commands dependencies for this target.
include CMakeFiles/http-populate.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/http-populate.dir/progress.make

CMakeFiles/http-populate: CMakeFiles/http-populate-complete

CMakeFiles/http-populate-complete: http-populate-prefix/src/http-populate-stamp/http-populate-install
CMakeFiles/http-populate-complete: http-populate-prefix/src/http-populate-stamp/http-populate-mkdir
CMakeFiles/http-populate-complete: http-populate-prefix/src/http-populate-stamp/http-populate-download
CMakeFiles/http-populate-complete: http-populate-prefix/src/http-populate-stamp/http-populate-update
CMakeFiles/http-populate-complete: http-populate-prefix/src/http-populate-stamp/http-populate-patch
CMakeFiles/http-populate-complete: http-populate-prefix/src/http-populate-stamp/http-populate-configure
CMakeFiles/http-populate-complete: http-populate-prefix/src/http-populate-stamp/http-populate-build
CMakeFiles/http-populate-complete: http-populate-prefix/src/http-populate-stamp/http-populate-install
CMakeFiles/http-populate-complete: http-populate-prefix/src/http-populate-stamp/http-populate-test
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'http-populate'"
	/usr/bin/cmake -E make_directory /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/CMakeFiles
	/usr/bin/cmake -E touch /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/CMakeFiles/http-populate-complete
	/usr/bin/cmake -E touch /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/http-populate-prefix/src/http-populate-stamp/http-populate-done

http-populate-prefix/src/http-populate-stamp/http-populate-update:
.PHONY : http-populate-prefix/src/http-populate-stamp/http-populate-update

http-populate-prefix/src/http-populate-stamp/http-populate-build: http-populate-prefix/src/http-populate-stamp/http-populate-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No build step for 'http-populate'"
	cd /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-build && /usr/bin/cmake -E echo_append
	cd /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-build && /usr/bin/cmake -E touch /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/http-populate-prefix/src/http-populate-stamp/http-populate-build

http-populate-prefix/src/http-populate-stamp/http-populate-configure: http-populate-prefix/tmp/http-populate-cfgcmd.txt
http-populate-prefix/src/http-populate-stamp/http-populate-configure: http-populate-prefix/src/http-populate-stamp/http-populate-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "No configure step for 'http-populate'"
	cd /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-build && /usr/bin/cmake -E echo_append
	cd /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-build && /usr/bin/cmake -E touch /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/http-populate-prefix/src/http-populate-stamp/http-populate-configure

http-populate-prefix/src/http-populate-stamp/http-populate-download: http-populate-prefix/src/http-populate-stamp/http-populate-gitinfo.txt
http-populate-prefix/src/http-populate-stamp/http-populate-download: http-populate-prefix/src/http-populate-stamp/http-populate-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'http-populate'"
	cd /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps && /usr/bin/cmake -P /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/http-populate-prefix/tmp/http-populate-gitclone.cmake
	cd /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps && /usr/bin/cmake -E touch /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/http-populate-prefix/src/http-populate-stamp/http-populate-download

http-populate-prefix/src/http-populate-stamp/http-populate-install: http-populate-prefix/src/http-populate-stamp/http-populate-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No install step for 'http-populate'"
	cd /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-build && /usr/bin/cmake -E echo_append
	cd /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-build && /usr/bin/cmake -E touch /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/http-populate-prefix/src/http-populate-stamp/http-populate-install

http-populate-prefix/src/http-populate-stamp/http-populate-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'http-populate'"
	/usr/bin/cmake -E make_directory /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-src
	/usr/bin/cmake -E make_directory /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-build
	/usr/bin/cmake -E make_directory /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/http-populate-prefix
	/usr/bin/cmake -E make_directory /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/http-populate-prefix/tmp
	/usr/bin/cmake -E make_directory /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/http-populate-prefix/src/http-populate-stamp
	/usr/bin/cmake -E make_directory /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/http-populate-prefix/src
	/usr/bin/cmake -E make_directory /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/http-populate-prefix/src/http-populate-stamp
	/usr/bin/cmake -E touch /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/http-populate-prefix/src/http-populate-stamp/http-populate-mkdir

http-populate-prefix/src/http-populate-stamp/http-populate-patch: http-populate-prefix/src/http-populate-stamp/http-populate-update
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'http-populate'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/http-populate-prefix/src/http-populate-stamp/http-populate-patch

http-populate-prefix/src/http-populate-stamp/http-populate-update:
.PHONY : http-populate-prefix/src/http-populate-stamp/http-populate-update

http-populate-prefix/src/http-populate-stamp/http-populate-test: http-populate-prefix/src/http-populate-stamp/http-populate-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No test step for 'http-populate'"
	cd /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-build && /usr/bin/cmake -E echo_append
	cd /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-build && /usr/bin/cmake -E touch /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/http-populate-prefix/src/http-populate-stamp/http-populate-test

http-populate-prefix/src/http-populate-stamp/http-populate-update: http-populate-prefix/src/http-populate-stamp/http-populate-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Performing update step for 'http-populate'"
	cd /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-src && /usr/bin/cmake -P /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/http-populate-prefix/tmp/http-populate-gitupdate.cmake

http-populate: CMakeFiles/http-populate
http-populate: CMakeFiles/http-populate-complete
http-populate: http-populate-prefix/src/http-populate-stamp/http-populate-build
http-populate: http-populate-prefix/src/http-populate-stamp/http-populate-configure
http-populate: http-populate-prefix/src/http-populate-stamp/http-populate-download
http-populate: http-populate-prefix/src/http-populate-stamp/http-populate-install
http-populate: http-populate-prefix/src/http-populate-stamp/http-populate-mkdir
http-populate: http-populate-prefix/src/http-populate-stamp/http-populate-patch
http-populate: http-populate-prefix/src/http-populate-stamp/http-populate-test
http-populate: http-populate-prefix/src/http-populate-stamp/http-populate-update
http-populate: CMakeFiles/http-populate.dir/build.make
.PHONY : http-populate

# Rule to build all files generated by this target.
CMakeFiles/http-populate.dir/build: http-populate
.PHONY : CMakeFiles/http-populate.dir/build

CMakeFiles/http-populate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/http-populate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/http-populate.dir/clean

CMakeFiles/http-populate.dir/depend:
	cd /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild /home/tomas/Documents/FinalPRoject/Final_Udacity/build/_deps/http-subbuild/CMakeFiles/http-populate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/http-populate.dir/depend

