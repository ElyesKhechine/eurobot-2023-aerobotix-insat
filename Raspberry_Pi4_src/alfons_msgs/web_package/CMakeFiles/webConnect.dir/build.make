# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/ubuntu/AeroBotiX_euro2021/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/AeroBotiX_euro2021/src/alfons_msgs

# Include any dependencies generated for this target.
include web_package/CMakeFiles/webConnect.dir/depend.make

# Include the progress variables for this target.
include web_package/CMakeFiles/webConnect.dir/progress.make

# Include the compile flags for this target's objects.
include web_package/CMakeFiles/webConnect.dir/flags.make

web_package/CMakeFiles/webConnect.dir/src/webConnect.cpp.o: web_package/CMakeFiles/webConnect.dir/flags.make
web_package/CMakeFiles/webConnect.dir/src/webConnect.cpp.o: ../web_package/src/webConnect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/AeroBotiX_euro2021/src/alfons_msgs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object web_package/CMakeFiles/webConnect.dir/src/webConnect.cpp.o"
	cd /home/ubuntu/AeroBotiX_euro2021/src/alfons_msgs/web_package && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/webConnect.dir/src/webConnect.cpp.o -c /home/ubuntu/AeroBotiX_euro2021/src/web_package/src/webConnect.cpp

web_package/CMakeFiles/webConnect.dir/src/webConnect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/webConnect.dir/src/webConnect.cpp.i"
	cd /home/ubuntu/AeroBotiX_euro2021/src/alfons_msgs/web_package && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/AeroBotiX_euro2021/src/web_package/src/webConnect.cpp > CMakeFiles/webConnect.dir/src/webConnect.cpp.i

web_package/CMakeFiles/webConnect.dir/src/webConnect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/webConnect.dir/src/webConnect.cpp.s"
	cd /home/ubuntu/AeroBotiX_euro2021/src/alfons_msgs/web_package && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/AeroBotiX_euro2021/src/web_package/src/webConnect.cpp -o CMakeFiles/webConnect.dir/src/webConnect.cpp.s

# Object files for target webConnect
webConnect_OBJECTS = \
"CMakeFiles/webConnect.dir/src/webConnect.cpp.o"

# External object files for target webConnect
webConnect_EXTERNAL_OBJECTS =

devel/lib/web_package/webConnect: web_package/CMakeFiles/webConnect.dir/src/webConnect.cpp.o
devel/lib/web_package/webConnect: web_package/CMakeFiles/webConnect.dir/build.make
devel/lib/web_package/webConnect: /opt/ros/noetic/lib/libroscpp.so
devel/lib/web_package/webConnect: /usr/lib/aarch64-linux-gnu/libpthread.so
devel/lib/web_package/webConnect: /usr/lib/aarch64-linux-gnu/libboost_chrono.so.1.71.0
devel/lib/web_package/webConnect: /usr/lib/aarch64-linux-gnu/libboost_filesystem.so.1.71.0
devel/lib/web_package/webConnect: /opt/ros/noetic/lib/librosconsole.so
devel/lib/web_package/webConnect: /opt/ros/noetic/lib/librosconsole_log4cxx.so
devel/lib/web_package/webConnect: /opt/ros/noetic/lib/librosconsole_backend_interface.so
devel/lib/web_package/webConnect: /usr/lib/aarch64-linux-gnu/liblog4cxx.so
devel/lib/web_package/webConnect: /usr/lib/aarch64-linux-gnu/libboost_regex.so.1.71.0
devel/lib/web_package/webConnect: /opt/ros/noetic/lib/libxmlrpcpp.so
devel/lib/web_package/webConnect: /opt/ros/noetic/lib/libroscpp_serialization.so
devel/lib/web_package/webConnect: /opt/ros/noetic/lib/librostime.so
devel/lib/web_package/webConnect: /usr/lib/aarch64-linux-gnu/libboost_date_time.so.1.71.0
devel/lib/web_package/webConnect: /opt/ros/noetic/lib/libcpp_common.so
devel/lib/web_package/webConnect: /usr/lib/aarch64-linux-gnu/libboost_system.so.1.71.0
devel/lib/web_package/webConnect: /usr/lib/aarch64-linux-gnu/libboost_thread.so.1.71.0
devel/lib/web_package/webConnect: /usr/lib/aarch64-linux-gnu/libconsole_bridge.so.0.4
devel/lib/web_package/webConnect: web_package/CMakeFiles/webConnect.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/AeroBotiX_euro2021/src/alfons_msgs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../devel/lib/web_package/webConnect"
	cd /home/ubuntu/AeroBotiX_euro2021/src/alfons_msgs/web_package && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/webConnect.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
web_package/CMakeFiles/webConnect.dir/build: devel/lib/web_package/webConnect

.PHONY : web_package/CMakeFiles/webConnect.dir/build

web_package/CMakeFiles/webConnect.dir/clean:
	cd /home/ubuntu/AeroBotiX_euro2021/src/alfons_msgs/web_package && $(CMAKE_COMMAND) -P CMakeFiles/webConnect.dir/cmake_clean.cmake
.PHONY : web_package/CMakeFiles/webConnect.dir/clean

web_package/CMakeFiles/webConnect.dir/depend:
	cd /home/ubuntu/AeroBotiX_euro2021/src/alfons_msgs && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/AeroBotiX_euro2021/src /home/ubuntu/AeroBotiX_euro2021/src/web_package /home/ubuntu/AeroBotiX_euro2021/src/alfons_msgs /home/ubuntu/AeroBotiX_euro2021/src/alfons_msgs/web_package /home/ubuntu/AeroBotiX_euro2021/src/alfons_msgs/web_package/CMakeFiles/webConnect.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : web_package/CMakeFiles/webConnect.dir/depend

