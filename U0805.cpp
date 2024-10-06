#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;  // 输入 n 和 m

    for (int i = 0; i < n; i++) {  // 循环控制行数
        for (int j = 0; j < m; j++) {  // 循环控制每行的列数
            std::cout << '*';
        }
        std::cout << std::endl;  // 换行
    }

    return 0;
}
