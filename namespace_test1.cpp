#include<iostream>
using namespace std;
namespace n1
{
int x;
int y;
}
namespace n2
{
int m;
int n;
}

main()
{
    using n1::x;
    x=10;
    n1::y=20;
    cout<<x<<" "<<n1::y<<endl;
    int x=43;
    n2::m=30;
    n2::n=40;
    n1::x=10;
    cout<<n2::m<<" "<<n2::n<<" "<<n1::x<<endl;
}

