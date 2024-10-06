//C++ MinGW GCC 9.2.0 32-bit Release
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[3][4] = {  
	 {0, 1, 2, 3} ,   /*  初始化索引号? 0 的行 */
	 {4, 5, 6, 7} ,   /*  初始化索引号? 1 的行 */
	 {8, 9, 10, 11}   /*  初始化索引号? 2 的行 */
	};
	int n,m;
	cin>>n>>m;
	cout<<a[n][m];
	return 0;
}
