#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
    //读取文件
    cout<<"请输入文件名：";
    string fname;
    string s1,s2;
    while(1)
    {
        cin>>fname;
        ifstream in(fname);
        if(!in.is_open())
            cout<<"文件打开失败，请重新输入：";
        else
        {
            cout<<"文件打开成功！"<<endl;
            //将文件读入到支付传中
            while(getline(in,s1))
            {
                s2+=s1;
            }
            break;
        }
    }
    //输入搜索关键词
    cout<<"请输入搜索关键词：";
    string kw;
    cin>>kw;
    //输出关键词及后面的句子
    string::size_type pos=0;
    int i=0,ct=0;
    //定义输出文件
    ofstream of("out.txt",ios::app);
    while((pos=s2.find(kw,pos))!=string::npos)
    {
        ct++;
        i=pos;
        pos++;
        for(int j=0; j<30; j++,i++)
        {
            //cout<<s2[i];
            of<<s2[i];
        }
        of<<'\n';
        cout<<endl;
    }
    cout<<"一共出现了 "<<ct<<" 次 "<<kw;
}
