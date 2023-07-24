#cmake 版本
cmake_minimum_required(VERSION 3.5)
#工程名称
project(demo)

# 编译配置
set(DEFAULT_BUILD_TYPE "Debug")
set(CMAKE_CXX_STANDARD 17)


add_executable(demo ./demo.cpp)