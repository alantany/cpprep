#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
<<<<<<< HEAD
    //��ȡ�ļ�
    cout<<"�������ļ�����";
    string fname;
    string s1,s2;
    while(1)
    {
        cin>>fname;
        ifstream in(fname);
        if(!in.is_open())
            cout<<"�ļ���ʧ�ܣ����������룺";
        else
        {
            cout<<"�ļ��򿪳ɹ���"<<endl;
            //���ļ����뵽֧������
            while(getline(in,s1))
            {
                s2+=s1;
            }
            break;
        }
    }
    //���������ؼ���
    cout<<"�����������ؼ��ʣ�";
    string kw;
    cin>>kw;
    //����ؼ��ʼ�����ľ���
    string::size_type pos=0;
    int i=0,ct=0;
    //��������ļ�
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
    cout<<"һ�������� "<<ct<<" �� "<<kw;
=======
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
>>>>>>> 9d5626044242ed78e13bb7706ff0fde60be3f8dc
}
