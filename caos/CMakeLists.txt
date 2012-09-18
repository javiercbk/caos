project(caos)
cmake_minimum_required(VERSION 2.6.2)

add_definitions(-Wall)

set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/include)

add_subdirectory(src)

add_subdirectory(test)