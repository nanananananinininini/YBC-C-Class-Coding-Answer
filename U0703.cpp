#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n; // ��ȡ�˶�Ա����

    std::vector<int> numbers(n); // ����һ����СΪ n ����������
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i]; // ��ȡÿ���˶�Ա�ı��
    }

    int target = 22; // Ŀ���˶�Ա���
    int index = -1; // ��ʼλ����Ϊ-1����ʾδ�ҵ�

    // �����������Ŀ���˶�Ա���
    for (int i = 0; i < n; ++i) {
        if (numbers[i] == target) {
            index = i + 1; // �ҵ�Ŀ���ţ���¼λ�ã���1����Ϊ��ĿҪ���1��ʼ����
            break;
        }
    }

    // ������
    if (index != -1) {
        std::cout << target << " " << index << std::endl;
    } else {
        std::cout << "22��ѡ�ֲ��ڶ�����" << std::endl;
    }

    return 0;
}
