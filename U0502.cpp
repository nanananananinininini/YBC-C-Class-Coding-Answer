//C++ MinGW GCC 9.2.0 32-bit Release
#include<bits/stdc++.h>
using namespace std;
long long S;
int main() {
	long long n;
	cin>>n;
	for (long long i = 1; i <= n; i++) {
		S = S + i;
	}
	cout << S << endl;
	return 0;
}
