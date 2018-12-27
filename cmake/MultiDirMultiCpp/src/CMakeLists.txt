# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include)
set(LIB_SRC Drawing.cpp ProgressBar.cpp)
add_library(Drawing ${LIB_SRC})
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
set_target_properties(Drawing PROPERTIES OUPUT_NAME "Drawing")
