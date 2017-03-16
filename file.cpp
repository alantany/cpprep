#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
const int size  =60;
int main()
{
    ifstream infile;
    char fn[size];
    char ch;
    int ct=0;
    cout<<"please input filename:";
    cin.getline(fn,size);
    infile.open(fn);

    if(!infile.is_open())
    {
        cout<<"file open failed!";
        return 0;
    }
    else
        cout<<"file opened successfully!";
    while(!infile.eof())
    {
        ++ct;
        infile>>ch;
        cout<<ch;
        cin.

    }
    if(infile.eof())
        cout<<"file read completed!"<<endl;
    cout<<"total "<<ct<<" characters read!";


}
