#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
    cout<<"�ӷ�С����!"<<endl;
    int x,y;
    int z;
    while(1)
    {
        x=rand()%100;
        y=rand()%100;

        cout<<x<<" + "<<y<<" = ";
        if(!(cin>>z))
        {
            cout<<"������󣬳����˳�!"<<endl;
            break;
        }
        if(z==(x+y))
            cout<<"�ش���ȷ����ϲ��"<<endl;
        else
            cout<<"�ش���󣬼������ͣ�"<<endl;

    }
}
