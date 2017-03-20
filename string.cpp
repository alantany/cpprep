#include<iostream>
#include<string>
#include<cstring>
using namespace std;
main()
{
    string s[3];
    for(int i=0;i<3;i++)
    {
        cout<<"input the "<<i+1<<" member:";
        getline(cin,s[i]);
    }
    for(int i=0;i<3;i++)
        cout<<s[i]<<endl;

}
