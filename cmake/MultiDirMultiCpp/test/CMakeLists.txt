# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include)
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/src)
set(MAIN_SRC main.cpp)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
add_executable(main ${MAIN_SRC})
target_link_libraries(main Drawing)
