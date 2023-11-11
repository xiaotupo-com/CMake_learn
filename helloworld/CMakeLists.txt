
# 指定 CMake 最低版本
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# 指定项目名
project(helloworld VERSION 1.0 LANGUAGES C)

message(STATUS "PROJECT_BINARY_DIR: " ${PROJECT_BINARY_DIR})
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin) # 修改可执行文件的生成路径

# 生成可执行文件
add_executable(${PROJECT_NAME} src/main.c)
