cmake_minimum_required(VERSION 3.29)
project(CPP_project)

set(CMAKE_CXX_STANDARD 20)

# 遍历项目目录下所有的 .cpp 文件 两层
#一层
# file (GLOB files test/*.cpp)
#两层
# file (GLOB files *.cpp */*.cpp)
# 同理，三层的话
# file (GLOB files *.cpp */*.cpp */*/*.cpp)



# 遍历项目根目录下所有的 .cpp 文件
file (GLOB files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()

#add_executable(CPP_project
#        day01-hello.cpp)
