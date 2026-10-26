# C-Design

C++ 项目。

## 怎么加一个新程序

**只要做两件事：**

1. 在 `src\` 里新建一个 `.cpp` 文件，里面写你的 `int main()`
2. 点 CLion 右上角弹出的 `Reload CMake Project`

**完事。** `CMakeLists.txt` 不用改，它会自动把 `src\` 里每个 `.cpp` 编成同名程序。

```text
src\sum.cpp     →  sum.exe
src\lab1.cpp     →  lab1.exe
src\lab1_2.cpp   →  lab1_2.exe
```

然后 CLion 右上角的运行配置下拉框里就能选到对应的程序。

> **新建文件用「新建 → 文件」，不要用「新建 C++ 类」。**
> 那个类是给 C++ 的 `class` 用的，勾了「添加到目标」还会把 CMakeLists 改坏。

## 注意

- 一个 `.cpp` 只能有一个 `main()`。两个程序不要写在同一个文件里。
- 实验文件统一使用下划线，例如 `lab1_2.cpp`；文件扩展名必须是 `.cpp`。
- 两个文件同名会冲突。

## 中文乱码怎么办

`CMakeLists.txt` 里已经加了 `-fexec-charset=GBK`，因为：

- 源文件是 UTF-8 编码
- Windows 中文控制台是 GBK(936)

不转换的话 `cout << "中文"` 会显示成 `杈撳叆`。

**如果还是乱码**：`设置 → 编辑器 → 文件编码`，把最下面的「控制台」编码设成 GBK 或系统默认。

## 构建

CMake 3.20+ / C++17，在 CLion 2026.2 + 自带 MinGW（GCC 15.2）验证通过。

编译产物在 `cmake-build-debug\`，不提交。

## 上传 GitHub

- 提交：`Ctrl + K`
- 推送：`Ctrl + Shift + K`
