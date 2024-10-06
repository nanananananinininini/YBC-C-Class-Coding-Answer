#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n; // 读取运动员总数

    std::vector<int> numbers(n); // 创建一个大小为 n 的整数数组
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i]; // 读取每个运动员的编号
    }

    int target = 22; // 目标运动员编号
    int index = -1; // 初始位置设为-1，表示未找到

    // 遍历数组查找目标运动员编号
    for (int i = 0; i < n; ++i) {
        if (numbers[i] == target) {
            index = i + 1; // 找到目标编号，记录位置，加1是因为题目要求从1开始计数
            break;
        }
    }

    // 输出结果
    if (index != -1) {
        std::cout << target << " " << index << std::endl;
    } else {
        std::cout << "22号选手不在队伍中" << std::endl;
    }

    return 0;
}
