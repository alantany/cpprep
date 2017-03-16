#include<iostream>
using namespace std;
int add(int,int);
main()
{
    int x,y;
    cout<<"1st number:";
    cin>x;
    cout<<"2nd number:";
    cin>>y;
    cout<<add(x,y);
}
int add(int x,int y)
{
    return x+y;
}
