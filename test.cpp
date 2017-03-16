#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
main()
{
    int amout,i;
    cout<<"请输入数据笔数:";
    cin>>amout;
    struct item
    {
        vector<string> name;
        vector<double> money;
    } ;
    item im{        name[amout];
                    money[amout];
           }=new item;
    cout<<endl;
    cout<<"你需要输入 "<<amout<<"组数据。";
    for(i=0; i<amout; i++)
    {
        cout<<"这是第 "<<i+1<<"组数据。"<<endl;
        cout<<"请输入名字：";
        cin>>p->name[i];
        cout<<"请输入数额：";
        cin>>p->money[i];
        cout<<endl;
    }
    cout<<endl;
    cout<<"下面是VIP捐款者："<<endl;
    for(i=0; i<amout; i++)
    {
        if(p->money[i]>10000)
            cout<<p->name[i]<<" "<<p->money[i]<<endl;
    }


}
