#include<iostream>
using namespace std;
template <typename T>
T sum(T x,T y)
{
    return x+y;
}


main()
{
    float m=10;
    double n=4.24;
    cout<<sum<float>(m,n);
}
