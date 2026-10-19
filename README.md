# C-Design

C++ 项目。

## 怎么加一个新程序

**只要做两件事：**

1. 在 `src\` 里新建一个 `.cpp` 文件（比如 `lab1.cpp`），里面写你的 `int main()`
2. 点 CLion 右上角弹出的 `Reload CMake Project`

**完事。** `CMakeLists.txt` 不用改，它会自动把 `src\` 里每个 `.cpp` 编成同名程序。

```text
src\main.cpp    →  main.exe
src\lab1.cpp    →  lab1.exe
src\test.cpp    →  test.exe
```

然后 CLion 右上角的运行配置下拉框里就能选到对应的程序。

> **注意**：新建文件时用「新建 → 文件」，不要用「新建 C++ 类」。
> 类对话框只能建类，名字里也不能有点号。

## 注意

- 一个 `.cpp` 只能有一个 `main()`。两个程序不要写在同一个文件里。
- 同名文件会冲突。

## 构建

CMake 3.20+ / C++17，在 CLion 2026.2 + 自带 MinGW（GCC 15.2）验证通过。

编译产物在 `cmake-build-debug\`，不提交。

## 上传 GitHub

- 提交：`Ctrl + K`
- 推送：`Ctrl + Shift + K`
