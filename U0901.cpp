//C++ MinGW GCC 9.2.0 32-bit Release
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[3][4] = {  
	 {0, 1, 2, 3} ,   /*  ���n��������? 0 �I�s */
	 {4, 5, 6, 7} ,   /*  ���n��������? 1 �I�s */
	 {8, 9, 10, 11}   /*  ���n��������? 2 �I�s */
	};
	int n,m;
	cin>>n>>m;
	cout<<a[n][m];
	return 0;
}
