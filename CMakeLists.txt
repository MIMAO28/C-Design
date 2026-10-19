cmake_minimum_required(VERSION 3.20)
project(CDesign LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 默认 Debug，断点调试能读到符号
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "" FORCE)
endif()

add_compile_options(-Wall -Wextra -fexec-charset=UTF-8)

# 所有程序统一输出到 cmake-build-debug/bin/
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# 静态链接 libstdc++ / libgcc，并把剩下唯一的 DLL 放到输出目录，
# 这样双击 exe 就能直接运行。
# 注：不用完全 -static，CLion 自带 MinGW 会链接失败。
if(MINGW)
    add_link_options(-static-libgcc -static-libstdc++)
    get_filename_component(_mingw_bin "${CMAKE_CXX_COMPILER}" DIRECTORY)
    file(MAKE_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
    file(COPY "${_mingw_bin}/libwinpthread-1.dll"
         DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
endif()


# ============================================================
#  唯一需要改的地方
#
#  每加一个实验/程序，就在下面加一行：
#      add_executable(名字  路径/main.cpp)
#
#  注意：一个 .cpp 里只能有一个 main()。
#        所以每个实验单独一个文件夹、单独一个 add_executable。
# ============================================================

# 项目主程序
add_executable(CDesign src/main.cpp)

# 加实验：把下面这行前面的 # 去掉，并把 lab1 改成你的实验名
# add_executable(lab1 labs/lab1/main.cpp)
