# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /opt/local/bin/cmake

# The command to remove a file.
RM = /opt/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /opt/local/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/javier/Documents/workspace/caos-old/caos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/javier/Documents/workspace/caos-old/caos

# Include any dependencies generated for this target.
include test/CMakeFiles/caos-test.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/caos-test.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/caos-test.dir/flags.make

test/CMakeFiles/caos-test.dir/BaseRegistryTranslatorTest.cpp.o: test/CMakeFiles/caos-test.dir/flags.make
test/CMakeFiles/caos-test.dir/BaseRegistryTranslatorTest.cpp.o: test/BaseRegistryTranslatorTest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/javier/Documents/workspace/caos-old/caos/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/CMakeFiles/caos-test.dir/BaseRegistryTranslatorTest.cpp.o"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/caos-test.dir/BaseRegistryTranslatorTest.cpp.o -c /Users/javier/Documents/workspace/caos-old/caos/test/BaseRegistryTranslatorTest.cpp

test/CMakeFiles/caos-test.dir/BaseRegistryTranslatorTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/caos-test.dir/BaseRegistryTranslatorTest.cpp.i"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/javier/Documents/workspace/caos-old/caos/test/BaseRegistryTranslatorTest.cpp > CMakeFiles/caos-test.dir/BaseRegistryTranslatorTest.cpp.i

test/CMakeFiles/caos-test.dir/BaseRegistryTranslatorTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/caos-test.dir/BaseRegistryTranslatorTest.cpp.s"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/javier/Documents/workspace/caos-old/caos/test/BaseRegistryTranslatorTest.cpp -o CMakeFiles/caos-test.dir/BaseRegistryTranslatorTest.cpp.s

test/CMakeFiles/caos-test.dir/BaseRegistryTranslatorTest.cpp.o.requires:
.PHONY : test/CMakeFiles/caos-test.dir/BaseRegistryTranslatorTest.cpp.o.requires

test/CMakeFiles/caos-test.dir/BaseRegistryTranslatorTest.cpp.o.provides: test/CMakeFiles/caos-test.dir/BaseRegistryTranslatorTest.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/caos-test.dir/build.make test/CMakeFiles/caos-test.dir/BaseRegistryTranslatorTest.cpp.o.provides.build
.PHONY : test/CMakeFiles/caos-test.dir/BaseRegistryTranslatorTest.cpp.o.provides

test/CMakeFiles/caos-test.dir/BaseRegistryTranslatorTest.cpp.o.provides.build: test/CMakeFiles/caos-test.dir/BaseRegistryTranslatorTest.cpp.o

test/CMakeFiles/caos-test.dir/BUSTest.cpp.o: test/CMakeFiles/caos-test.dir/flags.make
test/CMakeFiles/caos-test.dir/BUSTest.cpp.o: test/BUSTest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/javier/Documents/workspace/caos-old/caos/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/CMakeFiles/caos-test.dir/BUSTest.cpp.o"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/caos-test.dir/BUSTest.cpp.o -c /Users/javier/Documents/workspace/caos-old/caos/test/BUSTest.cpp

test/CMakeFiles/caos-test.dir/BUSTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/caos-test.dir/BUSTest.cpp.i"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/javier/Documents/workspace/caos-old/caos/test/BUSTest.cpp > CMakeFiles/caos-test.dir/BUSTest.cpp.i

test/CMakeFiles/caos-test.dir/BUSTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/caos-test.dir/BUSTest.cpp.s"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/javier/Documents/workspace/caos-old/caos/test/BUSTest.cpp -o CMakeFiles/caos-test.dir/BUSTest.cpp.s

test/CMakeFiles/caos-test.dir/BUSTest.cpp.o.requires:
.PHONY : test/CMakeFiles/caos-test.dir/BUSTest.cpp.o.requires

test/CMakeFiles/caos-test.dir/BUSTest.cpp.o.provides: test/CMakeFiles/caos-test.dir/BUSTest.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/caos-test.dir/build.make test/CMakeFiles/caos-test.dir/BUSTest.cpp.o.provides.build
.PHONY : test/CMakeFiles/caos-test.dir/BUSTest.cpp.o.provides

test/CMakeFiles/caos-test.dir/BUSTest.cpp.o.provides.build: test/CMakeFiles/caos-test.dir/BUSTest.cpp.o

test/CMakeFiles/caos-test.dir/DiskTest.cpp.o: test/CMakeFiles/caos-test.dir/flags.make
test/CMakeFiles/caos-test.dir/DiskTest.cpp.o: test/DiskTest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/javier/Documents/workspace/caos-old/caos/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/CMakeFiles/caos-test.dir/DiskTest.cpp.o"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/caos-test.dir/DiskTest.cpp.o -c /Users/javier/Documents/workspace/caos-old/caos/test/DiskTest.cpp

test/CMakeFiles/caos-test.dir/DiskTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/caos-test.dir/DiskTest.cpp.i"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/javier/Documents/workspace/caos-old/caos/test/DiskTest.cpp > CMakeFiles/caos-test.dir/DiskTest.cpp.i

test/CMakeFiles/caos-test.dir/DiskTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/caos-test.dir/DiskTest.cpp.s"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/javier/Documents/workspace/caos-old/caos/test/DiskTest.cpp -o CMakeFiles/caos-test.dir/DiskTest.cpp.s

test/CMakeFiles/caos-test.dir/DiskTest.cpp.o.requires:
.PHONY : test/CMakeFiles/caos-test.dir/DiskTest.cpp.o.requires

test/CMakeFiles/caos-test.dir/DiskTest.cpp.o.provides: test/CMakeFiles/caos-test.dir/DiskTest.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/caos-test.dir/build.make test/CMakeFiles/caos-test.dir/DiskTest.cpp.o.provides.build
.PHONY : test/CMakeFiles/caos-test.dir/DiskTest.cpp.o.provides

test/CMakeFiles/caos-test.dir/DiskTest.cpp.o.provides.build: test/CMakeFiles/caos-test.dir/DiskTest.cpp.o

test/CMakeFiles/caos-test.dir/FCFSTest.cpp.o: test/CMakeFiles/caos-test.dir/flags.make
test/CMakeFiles/caos-test.dir/FCFSTest.cpp.o: test/FCFSTest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/javier/Documents/workspace/caos-old/caos/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/CMakeFiles/caos-test.dir/FCFSTest.cpp.o"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/caos-test.dir/FCFSTest.cpp.o -c /Users/javier/Documents/workspace/caos-old/caos/test/FCFSTest.cpp

test/CMakeFiles/caos-test.dir/FCFSTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/caos-test.dir/FCFSTest.cpp.i"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/javier/Documents/workspace/caos-old/caos/test/FCFSTest.cpp > CMakeFiles/caos-test.dir/FCFSTest.cpp.i

test/CMakeFiles/caos-test.dir/FCFSTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/caos-test.dir/FCFSTest.cpp.s"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/javier/Documents/workspace/caos-old/caos/test/FCFSTest.cpp -o CMakeFiles/caos-test.dir/FCFSTest.cpp.s

test/CMakeFiles/caos-test.dir/FCFSTest.cpp.o.requires:
.PHONY : test/CMakeFiles/caos-test.dir/FCFSTest.cpp.o.requires

test/CMakeFiles/caos-test.dir/FCFSTest.cpp.o.provides: test/CMakeFiles/caos-test.dir/FCFSTest.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/caos-test.dir/build.make test/CMakeFiles/caos-test.dir/FCFSTest.cpp.o.provides.build
.PHONY : test/CMakeFiles/caos-test.dir/FCFSTest.cpp.o.provides

test/CMakeFiles/caos-test.dir/FCFSTest.cpp.o.provides.build: test/CMakeFiles/caos-test.dir/FCFSTest.cpp.o

test/CMakeFiles/caos-test.dir/PagingMMUTest.cpp.o: test/CMakeFiles/caos-test.dir/flags.make
test/CMakeFiles/caos-test.dir/PagingMMUTest.cpp.o: test/PagingMMUTest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/javier/Documents/workspace/caos-old/caos/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/CMakeFiles/caos-test.dir/PagingMMUTest.cpp.o"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/caos-test.dir/PagingMMUTest.cpp.o -c /Users/javier/Documents/workspace/caos-old/caos/test/PagingMMUTest.cpp

test/CMakeFiles/caos-test.dir/PagingMMUTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/caos-test.dir/PagingMMUTest.cpp.i"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/javier/Documents/workspace/caos-old/caos/test/PagingMMUTest.cpp > CMakeFiles/caos-test.dir/PagingMMUTest.cpp.i

test/CMakeFiles/caos-test.dir/PagingMMUTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/caos-test.dir/PagingMMUTest.cpp.s"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/javier/Documents/workspace/caos-old/caos/test/PagingMMUTest.cpp -o CMakeFiles/caos-test.dir/PagingMMUTest.cpp.s

test/CMakeFiles/caos-test.dir/PagingMMUTest.cpp.o.requires:
.PHONY : test/CMakeFiles/caos-test.dir/PagingMMUTest.cpp.o.requires

test/CMakeFiles/caos-test.dir/PagingMMUTest.cpp.o.provides: test/CMakeFiles/caos-test.dir/PagingMMUTest.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/caos-test.dir/build.make test/CMakeFiles/caos-test.dir/PagingMMUTest.cpp.o.provides.build
.PHONY : test/CMakeFiles/caos-test.dir/PagingMMUTest.cpp.o.provides

test/CMakeFiles/caos-test.dir/PagingMMUTest.cpp.o.provides.build: test/CMakeFiles/caos-test.dir/PagingMMUTest.cpp.o

test/CMakeFiles/caos-test.dir/PagingTranslatorTest.cpp.o: test/CMakeFiles/caos-test.dir/flags.make
test/CMakeFiles/caos-test.dir/PagingTranslatorTest.cpp.o: test/PagingTranslatorTest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/javier/Documents/workspace/caos-old/caos/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/CMakeFiles/caos-test.dir/PagingTranslatorTest.cpp.o"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/caos-test.dir/PagingTranslatorTest.cpp.o -c /Users/javier/Documents/workspace/caos-old/caos/test/PagingTranslatorTest.cpp

test/CMakeFiles/caos-test.dir/PagingTranslatorTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/caos-test.dir/PagingTranslatorTest.cpp.i"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/javier/Documents/workspace/caos-old/caos/test/PagingTranslatorTest.cpp > CMakeFiles/caos-test.dir/PagingTranslatorTest.cpp.i

test/CMakeFiles/caos-test.dir/PagingTranslatorTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/caos-test.dir/PagingTranslatorTest.cpp.s"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/javier/Documents/workspace/caos-old/caos/test/PagingTranslatorTest.cpp -o CMakeFiles/caos-test.dir/PagingTranslatorTest.cpp.s

test/CMakeFiles/caos-test.dir/PagingTranslatorTest.cpp.o.requires:
.PHONY : test/CMakeFiles/caos-test.dir/PagingTranslatorTest.cpp.o.requires

test/CMakeFiles/caos-test.dir/PagingTranslatorTest.cpp.o.provides: test/CMakeFiles/caos-test.dir/PagingTranslatorTest.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/caos-test.dir/build.make test/CMakeFiles/caos-test.dir/PagingTranslatorTest.cpp.o.provides.build
.PHONY : test/CMakeFiles/caos-test.dir/PagingTranslatorTest.cpp.o.provides

test/CMakeFiles/caos-test.dir/PagingTranslatorTest.cpp.o.provides.build: test/CMakeFiles/caos-test.dir/PagingTranslatorTest.cpp.o

test/CMakeFiles/caos-test.dir/PCBTest.cpp.o: test/CMakeFiles/caos-test.dir/flags.make
test/CMakeFiles/caos-test.dir/PCBTest.cpp.o: test/PCBTest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/javier/Documents/workspace/caos-old/caos/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/CMakeFiles/caos-test.dir/PCBTest.cpp.o"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/caos-test.dir/PCBTest.cpp.o -c /Users/javier/Documents/workspace/caos-old/caos/test/PCBTest.cpp

test/CMakeFiles/caos-test.dir/PCBTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/caos-test.dir/PCBTest.cpp.i"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/javier/Documents/workspace/caos-old/caos/test/PCBTest.cpp > CMakeFiles/caos-test.dir/PCBTest.cpp.i

test/CMakeFiles/caos-test.dir/PCBTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/caos-test.dir/PCBTest.cpp.s"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/javier/Documents/workspace/caos-old/caos/test/PCBTest.cpp -o CMakeFiles/caos-test.dir/PCBTest.cpp.s

test/CMakeFiles/caos-test.dir/PCBTest.cpp.o.requires:
.PHONY : test/CMakeFiles/caos-test.dir/PCBTest.cpp.o.requires

test/CMakeFiles/caos-test.dir/PCBTest.cpp.o.provides: test/CMakeFiles/caos-test.dir/PCBTest.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/caos-test.dir/build.make test/CMakeFiles/caos-test.dir/PCBTest.cpp.o.provides.build
.PHONY : test/CMakeFiles/caos-test.dir/PCBTest.cpp.o.provides

test/CMakeFiles/caos-test.dir/PCBTest.cpp.o.provides.build: test/CMakeFiles/caos-test.dir/PCBTest.cpp.o

test/CMakeFiles/caos-test.dir/RoundRobinTest.cpp.o: test/CMakeFiles/caos-test.dir/flags.make
test/CMakeFiles/caos-test.dir/RoundRobinTest.cpp.o: test/RoundRobinTest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/javier/Documents/workspace/caos-old/caos/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/CMakeFiles/caos-test.dir/RoundRobinTest.cpp.o"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/caos-test.dir/RoundRobinTest.cpp.o -c /Users/javier/Documents/workspace/caos-old/caos/test/RoundRobinTest.cpp

test/CMakeFiles/caos-test.dir/RoundRobinTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/caos-test.dir/RoundRobinTest.cpp.i"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/javier/Documents/workspace/caos-old/caos/test/RoundRobinTest.cpp > CMakeFiles/caos-test.dir/RoundRobinTest.cpp.i

test/CMakeFiles/caos-test.dir/RoundRobinTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/caos-test.dir/RoundRobinTest.cpp.s"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/javier/Documents/workspace/caos-old/caos/test/RoundRobinTest.cpp -o CMakeFiles/caos-test.dir/RoundRobinTest.cpp.s

test/CMakeFiles/caos-test.dir/RoundRobinTest.cpp.o.requires:
.PHONY : test/CMakeFiles/caos-test.dir/RoundRobinTest.cpp.o.requires

test/CMakeFiles/caos-test.dir/RoundRobinTest.cpp.o.provides: test/CMakeFiles/caos-test.dir/RoundRobinTest.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/caos-test.dir/build.make test/CMakeFiles/caos-test.dir/RoundRobinTest.cpp.o.provides.build
.PHONY : test/CMakeFiles/caos-test.dir/RoundRobinTest.cpp.o.provides

test/CMakeFiles/caos-test.dir/RoundRobinTest.cpp.o.provides.build: test/CMakeFiles/caos-test.dir/RoundRobinTest.cpp.o

test/CMakeFiles/caos-test.dir/SSTFTest.cpp.o: test/CMakeFiles/caos-test.dir/flags.make
test/CMakeFiles/caos-test.dir/SSTFTest.cpp.o: test/SSTFTest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/javier/Documents/workspace/caos-old/caos/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/CMakeFiles/caos-test.dir/SSTFTest.cpp.o"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/caos-test.dir/SSTFTest.cpp.o -c /Users/javier/Documents/workspace/caos-old/caos/test/SSTFTest.cpp

test/CMakeFiles/caos-test.dir/SSTFTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/caos-test.dir/SSTFTest.cpp.i"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/javier/Documents/workspace/caos-old/caos/test/SSTFTest.cpp > CMakeFiles/caos-test.dir/SSTFTest.cpp.i

test/CMakeFiles/caos-test.dir/SSTFTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/caos-test.dir/SSTFTest.cpp.s"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/javier/Documents/workspace/caos-old/caos/test/SSTFTest.cpp -o CMakeFiles/caos-test.dir/SSTFTest.cpp.s

test/CMakeFiles/caos-test.dir/SSTFTest.cpp.o.requires:
.PHONY : test/CMakeFiles/caos-test.dir/SSTFTest.cpp.o.requires

test/CMakeFiles/caos-test.dir/SSTFTest.cpp.o.provides: test/CMakeFiles/caos-test.dir/SSTFTest.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/caos-test.dir/build.make test/CMakeFiles/caos-test.dir/SSTFTest.cpp.o.provides.build
.PHONY : test/CMakeFiles/caos-test.dir/SSTFTest.cpp.o.provides

test/CMakeFiles/caos-test.dir/SSTFTest.cpp.o.provides.build: test/CMakeFiles/caos-test.dir/SSTFTest.cpp.o

test/CMakeFiles/caos-test.dir/TestSuite.cpp.o: test/CMakeFiles/caos-test.dir/flags.make
test/CMakeFiles/caos-test.dir/TestSuite.cpp.o: test/TestSuite.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/javier/Documents/workspace/caos-old/caos/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/CMakeFiles/caos-test.dir/TestSuite.cpp.o"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/caos-test.dir/TestSuite.cpp.o -c /Users/javier/Documents/workspace/caos-old/caos/test/TestSuite.cpp

test/CMakeFiles/caos-test.dir/TestSuite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/caos-test.dir/TestSuite.cpp.i"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/javier/Documents/workspace/caos-old/caos/test/TestSuite.cpp > CMakeFiles/caos-test.dir/TestSuite.cpp.i

test/CMakeFiles/caos-test.dir/TestSuite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/caos-test.dir/TestSuite.cpp.s"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/javier/Documents/workspace/caos-old/caos/test/TestSuite.cpp -o CMakeFiles/caos-test.dir/TestSuite.cpp.s

test/CMakeFiles/caos-test.dir/TestSuite.cpp.o.requires:
.PHONY : test/CMakeFiles/caos-test.dir/TestSuite.cpp.o.requires

test/CMakeFiles/caos-test.dir/TestSuite.cpp.o.provides: test/CMakeFiles/caos-test.dir/TestSuite.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/caos-test.dir/build.make test/CMakeFiles/caos-test.dir/TestSuite.cpp.o.provides.build
.PHONY : test/CMakeFiles/caos-test.dir/TestSuite.cpp.o.provides

test/CMakeFiles/caos-test.dir/TestSuite.cpp.o.provides.build: test/CMakeFiles/caos-test.dir/TestSuite.cpp.o

# Object files for target caos-test
caos__test_OBJECTS = \
"CMakeFiles/caos-test.dir/BaseRegistryTranslatorTest.cpp.o" \
"CMakeFiles/caos-test.dir/BUSTest.cpp.o" \
"CMakeFiles/caos-test.dir/DiskTest.cpp.o" \
"CMakeFiles/caos-test.dir/FCFSTest.cpp.o" \
"CMakeFiles/caos-test.dir/PagingMMUTest.cpp.o" \
"CMakeFiles/caos-test.dir/PagingTranslatorTest.cpp.o" \
"CMakeFiles/caos-test.dir/PCBTest.cpp.o" \
"CMakeFiles/caos-test.dir/RoundRobinTest.cpp.o" \
"CMakeFiles/caos-test.dir/SSTFTest.cpp.o" \
"CMakeFiles/caos-test.dir/TestSuite.cpp.o"

# External object files for target caos-test
caos__test_EXTERNAL_OBJECTS =

test/caos-test: test/CMakeFiles/caos-test.dir/BaseRegistryTranslatorTest.cpp.o
test/caos-test: test/CMakeFiles/caos-test.dir/BUSTest.cpp.o
test/caos-test: test/CMakeFiles/caos-test.dir/DiskTest.cpp.o
test/caos-test: test/CMakeFiles/caos-test.dir/FCFSTest.cpp.o
test/caos-test: test/CMakeFiles/caos-test.dir/PagingMMUTest.cpp.o
test/caos-test: test/CMakeFiles/caos-test.dir/PagingTranslatorTest.cpp.o
test/caos-test: test/CMakeFiles/caos-test.dir/PCBTest.cpp.o
test/caos-test: test/CMakeFiles/caos-test.dir/RoundRobinTest.cpp.o
test/caos-test: test/CMakeFiles/caos-test.dir/SSTFTest.cpp.o
test/caos-test: test/CMakeFiles/caos-test.dir/TestSuite.cpp.o
test/caos-test: test/CMakeFiles/caos-test.dir/build.make
test/caos-test: src/libcaos.dylib
test/caos-test: test/gtest-1.6.0/libgtest.a
test/caos-test: test/gtest-1.6.0/libgtest_main.a
test/caos-test: test/gtest-1.6.0/libgtest.a
test/caos-test: test/CMakeFiles/caos-test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable caos-test"
	cd /Users/javier/Documents/workspace/caos-old/caos/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/caos-test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/caos-test.dir/build: test/caos-test
.PHONY : test/CMakeFiles/caos-test.dir/build

test/CMakeFiles/caos-test.dir/requires: test/CMakeFiles/caos-test.dir/BaseRegistryTranslatorTest.cpp.o.requires
test/CMakeFiles/caos-test.dir/requires: test/CMakeFiles/caos-test.dir/BUSTest.cpp.o.requires
test/CMakeFiles/caos-test.dir/requires: test/CMakeFiles/caos-test.dir/DiskTest.cpp.o.requires
test/CMakeFiles/caos-test.dir/requires: test/CMakeFiles/caos-test.dir/FCFSTest.cpp.o.requires
test/CMakeFiles/caos-test.dir/requires: test/CMakeFiles/caos-test.dir/PagingMMUTest.cpp.o.requires
test/CMakeFiles/caos-test.dir/requires: test/CMakeFiles/caos-test.dir/PagingTranslatorTest.cpp.o.requires
test/CMakeFiles/caos-test.dir/requires: test/CMakeFiles/caos-test.dir/PCBTest.cpp.o.requires
test/CMakeFiles/caos-test.dir/requires: test/CMakeFiles/caos-test.dir/RoundRobinTest.cpp.o.requires
test/CMakeFiles/caos-test.dir/requires: test/CMakeFiles/caos-test.dir/SSTFTest.cpp.o.requires
test/CMakeFiles/caos-test.dir/requires: test/CMakeFiles/caos-test.dir/TestSuite.cpp.o.requires
.PHONY : test/CMakeFiles/caos-test.dir/requires

test/CMakeFiles/caos-test.dir/clean:
	cd /Users/javier/Documents/workspace/caos-old/caos/test && $(CMAKE_COMMAND) -P CMakeFiles/caos-test.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/caos-test.dir/clean

test/CMakeFiles/caos-test.dir/depend:
	cd /Users/javier/Documents/workspace/caos-old/caos && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/javier/Documents/workspace/caos-old/caos /Users/javier/Documents/workspace/caos-old/caos/test /Users/javier/Documents/workspace/caos-old/caos /Users/javier/Documents/workspace/caos-old/caos/test /Users/javier/Documents/workspace/caos-old/caos/test/CMakeFiles/caos-test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/caos-test.dir/depend

