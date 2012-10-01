ADD_SUBDIRECTORY (gtest-1.6.0)

set(PROJECT_TEST_NAME "caos-test")

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR} ${COMMON_INCLUDES} ${Boost_INCLUDE_DIRS})

FILE(GLOB ALL_TESTS *.cpp)

add_executable(${PROJECT_TEST_NAME} ${ALL_TESTS})

target_link_libraries(caos-test caos gtest gtest_main ${Boost_LIBRARIES})

add_test(caos-test caos-test)