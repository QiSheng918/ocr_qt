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
CMAKE_SOURCE_DIR = /home/seven/boot/ocr_qt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/seven/boot/ocr_qt/build

# Include any dependencies generated for this target.
include CMakeFiles/qtGlobalShotcut.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/qtGlobalShotcut.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/qtGlobalShotcut.dir/flags.make

CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey.cpp.o: CMakeFiles/qtGlobalShotcut.dir/flags.make
CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey.cpp.o: ../QHotkey/qhotkey.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/seven/boot/ocr_qt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey.cpp.o -c /home/seven/boot/ocr_qt/QHotkey/qhotkey.cpp

CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/seven/boot/ocr_qt/QHotkey/qhotkey.cpp > CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey.cpp.i

CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/seven/boot/ocr_qt/QHotkey/qhotkey.cpp -o CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey.cpp.s

CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey.cpp.o.requires:

.PHONY : CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey.cpp.o.requires

CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey.cpp.o.provides: CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey.cpp.o.requires
	$(MAKE) -f CMakeFiles/qtGlobalShotcut.dir/build.make CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey.cpp.o.provides.build
.PHONY : CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey.cpp.o.provides

CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey.cpp.o.provides.build: CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey.cpp.o


CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey_x11.cpp.o: CMakeFiles/qtGlobalShotcut.dir/flags.make
CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey_x11.cpp.o: ../QHotkey/qhotkey_x11.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/seven/boot/ocr_qt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey_x11.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey_x11.cpp.o -c /home/seven/boot/ocr_qt/QHotkey/qhotkey_x11.cpp

CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey_x11.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey_x11.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/seven/boot/ocr_qt/QHotkey/qhotkey_x11.cpp > CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey_x11.cpp.i

CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey_x11.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey_x11.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/seven/boot/ocr_qt/QHotkey/qhotkey_x11.cpp -o CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey_x11.cpp.s

CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey_x11.cpp.o.requires:

.PHONY : CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey_x11.cpp.o.requires

CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey_x11.cpp.o.provides: CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey_x11.cpp.o.requires
	$(MAKE) -f CMakeFiles/qtGlobalShotcut.dir/build.make CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey_x11.cpp.o.provides.build
.PHONY : CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey_x11.cpp.o.provides

CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey_x11.cpp.o.provides.build: CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey_x11.cpp.o


CMakeFiles/qtGlobalShotcut.dir/qtGlobalShotcut_autogen/mocs_compilation.cpp.o: CMakeFiles/qtGlobalShotcut.dir/flags.make
CMakeFiles/qtGlobalShotcut.dir/qtGlobalShotcut_autogen/mocs_compilation.cpp.o: qtGlobalShotcut_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/seven/boot/ocr_qt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/qtGlobalShotcut.dir/qtGlobalShotcut_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qtGlobalShotcut.dir/qtGlobalShotcut_autogen/mocs_compilation.cpp.o -c /home/seven/boot/ocr_qt/build/qtGlobalShotcut_autogen/mocs_compilation.cpp

CMakeFiles/qtGlobalShotcut.dir/qtGlobalShotcut_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qtGlobalShotcut.dir/qtGlobalShotcut_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/seven/boot/ocr_qt/build/qtGlobalShotcut_autogen/mocs_compilation.cpp > CMakeFiles/qtGlobalShotcut.dir/qtGlobalShotcut_autogen/mocs_compilation.cpp.i

CMakeFiles/qtGlobalShotcut.dir/qtGlobalShotcut_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qtGlobalShotcut.dir/qtGlobalShotcut_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/seven/boot/ocr_qt/build/qtGlobalShotcut_autogen/mocs_compilation.cpp -o CMakeFiles/qtGlobalShotcut.dir/qtGlobalShotcut_autogen/mocs_compilation.cpp.s

CMakeFiles/qtGlobalShotcut.dir/qtGlobalShotcut_autogen/mocs_compilation.cpp.o.requires:

.PHONY : CMakeFiles/qtGlobalShotcut.dir/qtGlobalShotcut_autogen/mocs_compilation.cpp.o.requires

CMakeFiles/qtGlobalShotcut.dir/qtGlobalShotcut_autogen/mocs_compilation.cpp.o.provides: CMakeFiles/qtGlobalShotcut.dir/qtGlobalShotcut_autogen/mocs_compilation.cpp.o.requires
	$(MAKE) -f CMakeFiles/qtGlobalShotcut.dir/build.make CMakeFiles/qtGlobalShotcut.dir/qtGlobalShotcut_autogen/mocs_compilation.cpp.o.provides.build
.PHONY : CMakeFiles/qtGlobalShotcut.dir/qtGlobalShotcut_autogen/mocs_compilation.cpp.o.provides

CMakeFiles/qtGlobalShotcut.dir/qtGlobalShotcut_autogen/mocs_compilation.cpp.o.provides.build: CMakeFiles/qtGlobalShotcut.dir/qtGlobalShotcut_autogen/mocs_compilation.cpp.o


# Object files for target qtGlobalShotcut
qtGlobalShotcut_OBJECTS = \
"CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey.cpp.o" \
"CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey_x11.cpp.o" \
"CMakeFiles/qtGlobalShotcut.dir/qtGlobalShotcut_autogen/mocs_compilation.cpp.o"

# External object files for target qtGlobalShotcut
qtGlobalShotcut_EXTERNAL_OBJECTS =

libqtGlobalShotcut.so: CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey.cpp.o
libqtGlobalShotcut.so: CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey_x11.cpp.o
libqtGlobalShotcut.so: CMakeFiles/qtGlobalShotcut.dir/qtGlobalShotcut_autogen/mocs_compilation.cpp.o
libqtGlobalShotcut.so: CMakeFiles/qtGlobalShotcut.dir/build.make
libqtGlobalShotcut.so: /usr/lib/x86_64-linux-gnu/libSM.so
libqtGlobalShotcut.so: /usr/lib/x86_64-linux-gnu/libICE.so
libqtGlobalShotcut.so: /usr/lib/x86_64-linux-gnu/libX11.so
libqtGlobalShotcut.so: /usr/lib/x86_64-linux-gnu/libXext.so
libqtGlobalShotcut.so: /usr/lib/x86_64-linux-gnu/libQt5X11Extras.so.5.9.5
libqtGlobalShotcut.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.9.5
libqtGlobalShotcut.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.9.5
libqtGlobalShotcut.so: CMakeFiles/qtGlobalShotcut.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/seven/boot/ocr_qt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library libqtGlobalShotcut.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/qtGlobalShotcut.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/qtGlobalShotcut.dir/build: libqtGlobalShotcut.so

.PHONY : CMakeFiles/qtGlobalShotcut.dir/build

CMakeFiles/qtGlobalShotcut.dir/requires: CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey.cpp.o.requires
CMakeFiles/qtGlobalShotcut.dir/requires: CMakeFiles/qtGlobalShotcut.dir/QHotkey/qhotkey_x11.cpp.o.requires
CMakeFiles/qtGlobalShotcut.dir/requires: CMakeFiles/qtGlobalShotcut.dir/qtGlobalShotcut_autogen/mocs_compilation.cpp.o.requires

.PHONY : CMakeFiles/qtGlobalShotcut.dir/requires

CMakeFiles/qtGlobalShotcut.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/qtGlobalShotcut.dir/cmake_clean.cmake
.PHONY : CMakeFiles/qtGlobalShotcut.dir/clean

CMakeFiles/qtGlobalShotcut.dir/depend:
	cd /home/seven/boot/ocr_qt/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/seven/boot/ocr_qt /home/seven/boot/ocr_qt /home/seven/boot/ocr_qt/build /home/seven/boot/ocr_qt/build /home/seven/boot/ocr_qt/build/CMakeFiles/qtGlobalShotcut.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/qtGlobalShotcut.dir/depend

