//C++ MinGW GCC 9.2.0 32-bit Release
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<i<<endl;
		if(i%30==0){
			break;
		}
	}
	return 0;
}
