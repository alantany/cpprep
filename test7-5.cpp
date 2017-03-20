#include<iostream>
using namespace std;

unsigned int jc(int);
main()
{
    int x;
    while(1)
    {
        cout<<"请输入一个数：" ;
        if(!(cin>>x))
        {
            cout<<"输入错误，退出！";
            return 0;
        }
        cout<<x<<"的阶乘等于: "<<jc(x)<<endl;
    }

}
unsigned int jc(int x)
{
    if(x>1)
    {
        return x*jc(x-1);
    }
}
