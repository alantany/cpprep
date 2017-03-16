#include<iostream>
#include<typeinfo>
#include<vector>
using namespace std;
main()
{
    cout<<"请输入集合的包含的数量:";
    int n;
    cin>>n;
    vector<int> vi;
    for(int i=0;i!=n;i++)
        vi.push_back(i);
    cout<<"请输入要查找的数字：";
    int x;
    cin>>x;
    auto begin=vi.begin();
    auto end=vi.end();
    auto mid=begin+(end-begin)/2;
    int ct=0;
    int j=0;
    while(*mid!=x&&mid!=end)
    {
        if(*mid>x)
            end=mid;
        else
            begin=mid+1;
        mid=begin+(end-begin)/2;
        ++j;
    }
    cout<<"从 "<<n<<" 个数字中用了 "<<j<<" 次搜索完成查询！";
}
