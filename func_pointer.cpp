#include<iostream>
using namespace std;
double f1(int);
double f2(int);
typedef double (*FP)(int);
FP fp;

void show(int,fp);
main()
{
    int i=10;
    show(i,f1);
    show(i,f2);
}

void show(int y,fp)
{
    cout<<(*fp)(y)<<endl;
}
double f1(int n)
{
    return n*10;
}
double f2(int n)
{
    return n*100;
}
