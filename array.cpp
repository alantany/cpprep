#include<iostream>
#include<array>
#include<string>
using namespace std;
const int Season=4;
const array<string,Season> snames={"spring","summer","autumn","winter"};
void fill(array<double,Season> *p);
void show(array<double,Season> p);
main()
{
    array<double,Season> expense;
    fill(&expense);
    show(expense);
}

void fill(array<double,Season> *p)
{
    for(int i=0;i<Season;i++)
    {
        cout<<"enter "<<snames[i]<<" expense:";
        cin>> (*p)[i];
    }
}

void show(array<double,Season> p)
{
    for(int i=0;i<Season;i++)
        cout<<p[i]<<endl;
}
