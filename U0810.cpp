#include <iostream>
#include <vector>
#include <sstream>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> password;
    std::string line;
    std::getline(std::cin, line); 
    std::getline(std::cin, line); 
    std::istringstream iss(line);

    int num;
    while (iss >> num) {
        password.push_back(num);
    }

    std::vector<int> encrypted_password;
    for (int digit : password) {
        int encrypted_digit = (digit + 5) / 2;
        encrypted_password.push_back(encrypted_digit);
    }

    for (int num : encrypted_password) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
