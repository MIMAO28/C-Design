#include <iostream>
#include <string>
#include <vector>

// C-Design
// 从 main 开始写，加新文件后记得同步更新 CMakeLists.txt 里的 PROJECT_SOURCES

int main() {
    std::cout << "C-Design build OK\n";
    std::cout << "C++ standard: " << __cplusplus << "\n";

    std::vector<std::string> todo{
        "replace this with your first module",
    };
    for (const auto& t : todo) {
        std::cout << "  TODO: " << t << "\n";
    }
    return 0;
}
