#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;  // ���� n �� m

    for (int i = 0; i < n; i++) {  // ѭ����������
        for (int j = 0; j < m; j++) {  // ѭ������ÿ�е�����
            std::cout << '*';
        }
        std::cout << std::endl;  // ����
    }

    return 0;
}
