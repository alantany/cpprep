<<<<<<< HEAD
#include<iostream>
#include<string>
using namespace std;
main()
{
    string s1="dsafweroewjklfsal;jflasd fsd",s2;
    s2<<s1;
    cout<<s2;
=======
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
main()
{
    int amout,i;
    cout<<"���������ݱ���:";
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
    cout<<"����Ҫ���� "<<amout<<"�����ݡ�";
    for(i=0; i<amout; i++)
    {
        cout<<"���ǵ� "<<i+1<<"�����ݡ�"<<endl;
        cout<<"���������֣�";
        cin>>p->name[i];
        cout<<"���������";
        cin>>p->money[i];
        cout<<endl;
    }
    cout<<endl;
    cout<<"������VIP����ߣ�"<<endl;
    for(i=0; i<amout; i++)
    {
        if(p->money[i]>10000)
            cout<<p->name[i]<<" "<<p->money[i]<<endl;
    }


>>>>>>> 9d5626044242ed78e13bb7706ff0fde60be3f8dc
}