cmake_minimum_required(VERSION 3.29)
project(Cpp_practice)

set(CMAKE_CXX_STANDARD 20)

# 遍历项目根目录下所有的 .cpp 文件
file (GLOB files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()

add_executable(Cpp_practice main.cpp)

