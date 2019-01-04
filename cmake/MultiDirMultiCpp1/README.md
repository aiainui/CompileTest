```
要求：
1）将Drawing.cpp ProgressBar.cpp生成库文件
2）链接1）生成可执行文件main

```

```
#参考答案
# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)
project (Demo3)
include_directories(${PROJECT_SOURCE_DIR}/include)
aux_source_directory(test MAIN_SRC)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
#link_libraries("${PROJECT_SOURCE_DIR}/lib/libDrawing.so")
link_directories("${PROJECT_SOURCE_DIR}/lib")
add_executable(main ${MAIN_SRC})
target_link_libraries(main Drawing)
```
