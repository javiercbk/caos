include_directories(${COMMON_INCLUDES}
	${COMMON_INCLUDES}/FileSystem
	${COMMON_INCLUDES}/IO
	${COMMON_INCLUDES}/memory
	${COMMON_INCLUDES}/scheduler
	${Boost_INCLUDE_DIRS})

FILE(GLOB_RECURSE ALL_SRC *.cpp)

add_library(caos SHARED ${ALL_SRC})

target_link_libraries(caos ${Boost_LIBRARIES})