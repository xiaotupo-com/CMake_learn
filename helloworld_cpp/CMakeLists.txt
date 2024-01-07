# 指定 CMake 最低版本
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(helloworld_cpp)

aux_source_directory(src src_dir)

include_directories(${PROJECT_SOURCE_DIR}/include)
link_directories(${PROJECT_SOURCE_DIR}/library)

add_executable(${PROJECT_NAME} ${src_dir})
target_link_libraries(${PROJECT_NAME} libfmtd.a)