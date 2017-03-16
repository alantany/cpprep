#include<iostream>
#include<vector>
using namespace std;
main()
{
    std::vector<int> v1;
    int x;
    while((cin>>x))
    {
         v1.push_back(x);
    }


    vector<int>::iterator  it1;
    for(it1=v1.begin();it1!=v1.end();it1++)
    std::cout<<*it1<<endl;
}
