#include<iostream>
#include<typeinfo>
#include<vector>
using namespace std;
main()
{
    cout<<"�����뼯�ϵİ���������:";
    int n;
    cin>>n;
    vector<int> vi;
    for(int i=0;i!=n;i++)
        vi.push_back(i);
    cout<<"������Ҫ���ҵ����֣�";
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
    cout<<"�� "<<n<<" ������������ "<<j<<" ��������ɲ�ѯ��";
}
