#include <iostream> 
using namespace std;
int main()
{ 
    int n, m;
    cin >> n >> m;
    //˫��forѭ�������n��m��ͼ��
    for(int i=1;i<=n;i++){//���ѭ��
        for(int j=1;j<=m;j++){//�ڲ�ѭ��
            cout<<"#"<<" ";
        }
        cout<<endl;//�������
    }
    return 0;
}
