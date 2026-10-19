# C-Design

C++ 项目。

## 目录

```text
CMakeLists.txt        编译配置（加新文件后要改这里）
src/main.cpp          项目主程序入口
labs/                 各个实验，一个实验一个文件夹
cmake-build-debug/    编译产物（不提交）
```

## 构建

CMake 3.20+ / C++17。
在 CLion 2026.2 + 自带 MinGW（GCC 15.2）下验证通过。

```text
cmake -S . -B cmake-build-debug
cmake --build cmake-build-debug
```

编出来的 exe 都在 `cmake-build-debug/bin/`。

## 怎么加一个新实验

**第 1 步**：建文件夹和文件

```text
labs/lab2/main.cpp        ← 里面写你的 int main()
```

**第 2 步**：打开 `CMakeLists.txt`，在最后加一行

```cmake
add_executable(lab2 labs/lab2/main.cpp)
```

**第 3 步**：CLion 右上角弹 `Reload CMake Project`，点一下。

然后 CLion 的运行配置下拉框里就会多一个 `lab2`，可以直接运行/调试。

> 为什么每个实验要单独一个 `add_executable`？
> 因为一个程序只能有一个 `main()`。两个实验的 `main()` 放进同一个程序会链接报错。

## 上传到 GitHub

见 `CLion` 里：
- 提交：`Ctrl + K`
- 推送：`Ctrl + Shift + K`
