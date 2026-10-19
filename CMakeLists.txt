cmake_minimum_required(VERSION 3.20)
project(CDesign LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# src 里每放一个 .cpp，就自动编成一个同名程序。
# 加实验只要把 .cpp 丢进 src，这个文件不用改。
file(GLOB SOURCES "src/*.cpp")
foreach(src ${SOURCES})
    get_filename_component(name ${src} NAME_WE)
    add_executable(${name} ${src}
            src/lab1.1.cpp)
endforeach()