#include <iostream>

using namespace std;

int main() {
    char color;
    cin >> color;

    switch (color) {
        case 'r':
            cout << "stop" << endl;
            break;
        case 'y':
            cout << "wait" << endl;
            break;
        case 'g':
            cout << "go" << endl;
            break;
        default:
            cout << "ÊäÈë´íÎó" << endl;
    }

    return 0;
}
