cmake_minimum_required(VERSION 3.14.3)
project(session2)

# add_executable(BigBang main.cpp Func.cpp)
# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)
add_executable(BigBang ${DIR_SRCS})