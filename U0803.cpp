#include <iostream> 
using namespace std;
int main()
{ 
    //˫��forѭ�������9��9�˷���
    //���ѭ������������
    for(int i=1;i<=9;i++){
        //�ڲ�ѭ�����������У�ע�����ֵ��˳��,�˴���Ҫ�޸�
        for(int j=1;j<=i;j++){
            //�������j  ��*��  i  ��=��  j*i  �� ��
            cout<<j<<"*"<<i<<"="<<j*i<<" ";
        }
        cout<<endl;
    }
          
    return 0;
}
