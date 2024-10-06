#include <iostream> 
using namespace std;
int main()
{ 
    //双重for循环，输出9×9乘法表
    //外层循环变量控制行
    for(int i=1;i<=9;i++){
        //内层循环变量控制列，注意输出值的顺序,此处需要修改
        for(int j=1;j<=i;j++){
            //依次输出j  “*”  i  “=”  j*i  “ ”
            cout<<j<<"*"<<i<<"="<<j*i<<" ";
        }
        cout<<endl;
    }
          
    return 0;
}
