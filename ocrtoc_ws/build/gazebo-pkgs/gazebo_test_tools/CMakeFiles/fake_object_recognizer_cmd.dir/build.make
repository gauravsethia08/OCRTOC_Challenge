# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/build

# Include any dependencies generated for this target.
include gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/depend.make

# Include the progress variables for this target.
include gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/progress.make

# Include the compile flags for this target's objects.
include gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/flags.make

gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/test/fake_object_recognizer_cmd.cpp.o: gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/flags.make
gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/test/fake_object_recognizer_cmd.cpp.o: /home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/src/gazebo-pkgs/gazebo_test_tools/test/fake_object_recognizer_cmd.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/test/fake_object_recognizer_cmd.cpp.o"
	cd /home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/build/gazebo-pkgs/gazebo_test_tools && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fake_object_recognizer_cmd.dir/test/fake_object_recognizer_cmd.cpp.o -c /home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/src/gazebo-pkgs/gazebo_test_tools/test/fake_object_recognizer_cmd.cpp

gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/test/fake_object_recognizer_cmd.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fake_object_recognizer_cmd.dir/test/fake_object_recognizer_cmd.cpp.i"
	cd /home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/build/gazebo-pkgs/gazebo_test_tools && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/src/gazebo-pkgs/gazebo_test_tools/test/fake_object_recognizer_cmd.cpp > CMakeFiles/fake_object_recognizer_cmd.dir/test/fake_object_recognizer_cmd.cpp.i

gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/test/fake_object_recognizer_cmd.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fake_object_recognizer_cmd.dir/test/fake_object_recognizer_cmd.cpp.s"
	cd /home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/build/gazebo-pkgs/gazebo_test_tools && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/src/gazebo-pkgs/gazebo_test_tools/test/fake_object_recognizer_cmd.cpp -o CMakeFiles/fake_object_recognizer_cmd.dir/test/fake_object_recognizer_cmd.cpp.s

gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/test/fake_object_recognizer_cmd.cpp.o.requires:

.PHONY : gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/test/fake_object_recognizer_cmd.cpp.o.requires

gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/test/fake_object_recognizer_cmd.cpp.o.provides: gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/test/fake_object_recognizer_cmd.cpp.o.requires
	$(MAKE) -f gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/build.make gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/test/fake_object_recognizer_cmd.cpp.o.provides.build
.PHONY : gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/test/fake_object_recognizer_cmd.cpp.o.provides

gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/test/fake_object_recognizer_cmd.cpp.o.provides.build: gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/test/fake_object_recognizer_cmd.cpp.o


# Object files for target fake_object_recognizer_cmd
fake_object_recognizer_cmd_OBJECTS = \
"CMakeFiles/fake_object_recognizer_cmd.dir/test/fake_object_recognizer_cmd.cpp.o"

# External object files for target fake_object_recognizer_cmd
fake_object_recognizer_cmd_EXTERNAL_OBJECTS =

/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/test/fake_object_recognizer_cmd.cpp.o
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/build.make
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /opt/ros/melodic/lib/libgazebo_ros_api_plugin.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /opt/ros/melodic/lib/libgazebo_ros_paths_plugin.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /usr/lib/x86_64-linux-gnu/libtinyxml.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /opt/ros/melodic/lib/libroslib.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /opt/ros/melodic/lib/librospack.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /usr/lib/x86_64-linux-gnu/libpython2.7.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /opt/ros/melodic/lib/libtf.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /opt/ros/melodic/lib/libtf2_ros.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /opt/ros/melodic/lib/libactionlib.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /opt/ros/melodic/lib/libmessage_filters.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /opt/ros/melodic/lib/libtf2.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /opt/ros/melodic/lib/libdynamic_reconfigure_config_init_mutex.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /opt/ros/melodic/lib/libroscpp.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /opt/ros/melodic/lib/librosconsole.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /opt/ros/melodic/lib/librostime.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /opt/ros/melodic/lib/libcpp_common.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd: gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd"
	cd /home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/build/gazebo-pkgs/gazebo_test_tools && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fake_object_recognizer_cmd.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/build: /home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/devel/lib/gazebo_test_tools/fake_object_recognizer_cmd

.PHONY : gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/build

gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/requires: gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/test/fake_object_recognizer_cmd.cpp.o.requires

.PHONY : gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/requires

gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/clean:
	cd /home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/build/gazebo-pkgs/gazebo_test_tools && $(CMAKE_COMMAND) -P CMakeFiles/fake_object_recognizer_cmd.dir/cmake_clean.cmake
.PHONY : gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/clean

gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/depend:
	cd /home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/src /home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/src/gazebo-pkgs/gazebo_test_tools /home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/build /home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/build/gazebo-pkgs/gazebo_test_tools /home/gaurav/NEW/OCRTOC_Challenge/ocrtoc_ws/build/gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gazebo-pkgs/gazebo_test_tools/CMakeFiles/fake_object_recognizer_cmd.dir/depend

