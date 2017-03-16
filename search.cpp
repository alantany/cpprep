#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
    cout<<"请输入文件名:";
    string fname;
    cin>>fname;
    ifstream in(fname);
    string s1,s2;
    while(getline(in,s1))
    {
        s2+=s1;
    }
    cout<<"请输入要分析的关键字:";
    string kw;
    cin>>kw;
    cout<<"请输入关键字后面显示的文字长度：";
    int len;
    cin>>len;
    string::size_type
    string::size_type pos=0;
    int i=0;
    while((pos=s2.find(kw,pos))!=string::npos)
    {
        i=pos;
        pos++;
        for(int j=0;j<len;j++,i++)
        {
            cout<<s2[i];
        }
        cout<<endl;
    }
}
