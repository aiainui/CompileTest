# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include)
AUX_SOURCE_DIRECTORY(. SRC_CPP)
#set(LIB_SRC ${SRC_CPP})
#add_library(Drawing ${LIB_SRC})
add_library(Drawing SHARED ${SRC_CPP})
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
#set_target_properties(Drawing PROPERTIES OUTPUT_NAME "Drawing")
