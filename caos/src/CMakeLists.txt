include_directories(${COMMON_INCLUDES}
	${COMMON_INCLUDES}/FileSystem
	${COMMON_INCLUDES}/IO
	${COMMON_INCLUDES}/memory)

FILE(GLOB_RECURSE ALL_SRC *.cpp)

add_library(caos SHARED ${ALL_SRC})