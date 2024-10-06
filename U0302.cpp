#include<bits/stdc++.h>
using namespace std;
int main() {
	int username;
	int password;
	cin >> username;
	cin >> password;
	if (username == 1234 && password == 2024 || username == 4321 && password == 4202) {
		cout << 1 << endl;
	} else {
		cout << 0 << endl;
	}
	return 0;
}
