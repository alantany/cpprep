#include<iostream>
using namespace std;
double recurs(unsigned int);

main()
{
    unsigned int n;
    cin>>n;
    cout<<recurs(n);

}

double  recurs(unsigned int n)
{
    //cout<<n<<" �εݹ麯�������ã�"<<endl;
    if(n<=1)
        return 1;
    else
    {
        return 1/recurs(n-1)+1/recurs(n-2);
    }

}






