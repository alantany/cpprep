#include<iostream>
using namespace std;
double f1(double,double,double (*)(double,double));
double f2(double,double);

main()
{

    cout<<f1(1.1,2.2,f2);
}

double f1(double x,double y,double (*f2)(double a,double b))
{
    return  f2(x,y);
}

double f2(double x,double y)
{
    return x*y;
}
