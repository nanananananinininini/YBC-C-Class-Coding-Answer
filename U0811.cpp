//C++ MinGW GCC 9.2.0 32-bit Release
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	int t;
	cin>>t;
	double ceilResult=ceil(n/t);
	if(n%t==0){
		cout<<n/t<<endl;
	}
	if(n%t!=0){
		cout<<ceilResult+1<<endl;
	}
	return 0;
}
