# 指定 CMake 最低版本
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(use_library_demo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)

set(ROOT_DIR ${PROJECT_SOURCE_DIR})
message(STATUS "PROJECT_SOURCE_DIR: " ${ROOT_DIR})


message(STATUS "PROJECT_BINARY_DIR: " ${PROJECT_BINARY_DIR})
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

include_directories(${ROOT_DIR}/lib)
link_directories(${ROOT_DIR}/lib)

aux_source_directory(src src_dir)

add_executable(${PROJECT_NAME} ${src_dir})
target_link_libraries(${PROJECT_NAME} libmessage.a)