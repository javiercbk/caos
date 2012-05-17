project(caos)
cmake_minimum_required(VERSION 2.6.2)

# Define helper functions and macros used by Google Test.
include(cmake/internal_utils.cmake)

option(caos_build_test "Build all of caos own tests." ON)

SET(CMAKE_CXX_FLAGS_TEST "-O0 -g3 -Wall -W" )
SET(CMAKE_CXX_FLAGS_DEBUG "-O0 -g3 -Wall -W" )
SET(CMAKE_CXX_FLAGS_RELEASE "-O2 -pipe -march=core2" )

# Where caos .h files can be found.
include_directories(
  ${caos_SOURCE_DIR}/include
  ${caos_SOURCE_DIR}/test)

# Where caos libraries can be found.
link_directories(
  ${caos_BINARY_DIR}/lib
  ${caos_BINARY_DIR}/src)

# cxx_library(gtest "${cxx_strict}" src/gtest-all.cc)
#target_link_libraries(caos)

if (caos_build_test)
  #cxx_test(name libs srcs...)
  cxx_test(TestSuite gtest_main test)
endif()

