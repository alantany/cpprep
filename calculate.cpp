#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
    cout<<"加法小测验!"<<endl;
    int x,y;
    int z;
    while(1)
    {
        x=rand()%100;
        y=rand()%100;

        cout<<x<<" + "<<y<<" = ";
        if(!(cin>>z))
        {
            cout<<"输入错误，程序退出!"<<endl;
            break;
        }
        if(z==(x+y))
            cout<<"回答正确，恭喜！"<<endl;
        else
            cout<<"回答错误，继续加油！"<<endl;

    }
}
