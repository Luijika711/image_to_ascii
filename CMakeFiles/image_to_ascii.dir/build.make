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
CMAKE_SOURCE_DIR = /home/lui/repos/image_to_ascii

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lui/repos/image_to_ascii

# Include any dependencies generated for this target.
include CMakeFiles/image_to_ascii.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/image_to_ascii.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/image_to_ascii.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/image_to_ascii.dir/flags.make

CMakeFiles/image_to_ascii.dir/main.cpp.o: CMakeFiles/image_to_ascii.dir/flags.make
CMakeFiles/image_to_ascii.dir/main.cpp.o: main.cpp
CMakeFiles/image_to_ascii.dir/main.cpp.o: CMakeFiles/image_to_ascii.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lui/repos/image_to_ascii/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/image_to_ascii.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/image_to_ascii.dir/main.cpp.o -MF CMakeFiles/image_to_ascii.dir/main.cpp.o.d -o CMakeFiles/image_to_ascii.dir/main.cpp.o -c /home/lui/repos/image_to_ascii/main.cpp

CMakeFiles/image_to_ascii.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/image_to_ascii.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lui/repos/image_to_ascii/main.cpp > CMakeFiles/image_to_ascii.dir/main.cpp.i

CMakeFiles/image_to_ascii.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/image_to_ascii.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lui/repos/image_to_ascii/main.cpp -o CMakeFiles/image_to_ascii.dir/main.cpp.s

# Object files for target image_to_ascii
image_to_ascii_OBJECTS = \
"CMakeFiles/image_to_ascii.dir/main.cpp.o"

# External object files for target image_to_ascii
image_to_ascii_EXTERNAL_OBJECTS =

image_to_ascii: CMakeFiles/image_to_ascii.dir/main.cpp.o
image_to_ascii: CMakeFiles/image_to_ascii.dir/build.make
image_to_ascii: /usr/local/lib/libopencv_gapi.so.4.8.0
image_to_ascii: /usr/local/lib/libopencv_highgui.so.4.8.0
image_to_ascii: /usr/local/lib/libopencv_ml.so.4.8.0
image_to_ascii: /usr/local/lib/libopencv_objdetect.so.4.8.0
image_to_ascii: /usr/local/lib/libopencv_photo.so.4.8.0
image_to_ascii: /usr/local/lib/libopencv_stitching.so.4.8.0
image_to_ascii: /usr/local/lib/libopencv_video.so.4.8.0
image_to_ascii: /usr/local/lib/libopencv_videoio.so.4.8.0
image_to_ascii: /usr/local/lib/libopencv_imgcodecs.so.4.8.0
image_to_ascii: /usr/local/lib/libopencv_dnn.so.4.8.0
image_to_ascii: /usr/local/lib/libopencv_calib3d.so.4.8.0
image_to_ascii: /usr/local/lib/libopencv_features2d.so.4.8.0
image_to_ascii: /usr/local/lib/libopencv_flann.so.4.8.0
image_to_ascii: /usr/local/lib/libopencv_imgproc.so.4.8.0
image_to_ascii: /usr/local/lib/libopencv_core.so.4.8.0
image_to_ascii: CMakeFiles/image_to_ascii.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lui/repos/image_to_ascii/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable image_to_ascii"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/image_to_ascii.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/image_to_ascii.dir/build: image_to_ascii
.PHONY : CMakeFiles/image_to_ascii.dir/build

CMakeFiles/image_to_ascii.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/image_to_ascii.dir/cmake_clean.cmake
.PHONY : CMakeFiles/image_to_ascii.dir/clean

CMakeFiles/image_to_ascii.dir/depend:
	cd /home/lui/repos/image_to_ascii && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lui/repos/image_to_ascii /home/lui/repos/image_to_ascii /home/lui/repos/image_to_ascii /home/lui/repos/image_to_ascii /home/lui/repos/image_to_ascii/CMakeFiles/image_to_ascii.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/image_to_ascii.dir/depend

