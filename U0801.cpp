#include <iostream> 
using namespace std;
int main()
{ 
    int n, m;
    cin >> n >> m;
    //双重for循环，输出n行m列图形
    for(int i=1;i<=n;i++){//外层循环
        for(int j=1;j<=m;j++){//内层循环
            cout<<"#"<<" ";
        }
        cout<<endl;//输出换行
    }
    return 0;
}
