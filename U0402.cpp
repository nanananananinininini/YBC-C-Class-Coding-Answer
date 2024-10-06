#include <iostream>

using namespace std;

int main() {
    int notebook, pen, tool;
    cin >> notebook >> pen >> tool;

    int total_cost = notebook * 13 + pen * 5 + tool * 15;

    if (total_cost <= 50) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
