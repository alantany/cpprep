#include<iostream>
#include<string>
using namespace std;
const int seasons=4;
const string snames[seasons]={"spring","summer","autumn","summer"};
void fill(double *p);
void show(double p[seasons]);
main()
{
    double expense[seasons];
    fill(expense);
    show(expense);
    return 0;
}

void fill(double *p)
{
    for(int i=0;i<seasons;i++)
    {
        cout<<"enter "<<snames[i]<<" expense£º";
        cin>>p[i];
    }
}

void show(double p[seasons])
{
    for(int i=0;i<seasons;i++)
        cout<<p[i]<<endl;
}
