#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
    cout<<"�������ļ���:";
    string fname;
    cin>>fname;
    ifstream in(fname);
    string s1,s2;
    while(getline(in,s1))
    {
        s2+=s1;
    }
    cout<<"������Ҫ�����Ĺؼ���:";
    string kw;
    cin>>kw;
    cout<<"������ؼ��ֺ�����ʾ�����ֳ��ȣ�";
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
