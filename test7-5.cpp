#include<iostream>
using namespace std;

unsigned int jc(int);
main()
{
    int x;
    while(1)
    {
        cout<<"������һ������" ;
        if(!(cin>>x))
        {
            cout<<"��������˳���";
            return 0;
        }
        cout<<x<<"�Ľ׳˵���: "<<jc(x)<<endl;
    }

}
unsigned int jc(int x)
{
    if(x>1)
    {
        return x*jc(x-1);
    }
}
