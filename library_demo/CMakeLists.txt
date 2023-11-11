# 指定 CMake 最低版本
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(message)

aux_source_directory(src src_dir)

add_library(message
            STATIC
            ${src_dir})

