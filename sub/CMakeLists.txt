cmake_minimum_required(VERSION 3.10)
project(Trunk)

set(CMAKE_CXX_STANDARD 17)
add_definitions(-std=c++17)

# 添加 math 子目录
add_subdirectory(helper)
# 指定生成目标 
add_executable(Trunk main.cpp)
# 添加链接库
target_link_libraries(Trunk HelperFunction)
