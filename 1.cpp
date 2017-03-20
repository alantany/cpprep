#include<stdio.h>
#include<iostream>
#include<cctype>
#include<algorithm>
using namespace std;
int main()
{
    double dc[10],d=0,avg;
    int i,j=0;
    for(i=0; i<10; i++)
    {
        cout<<"请输入第 "<<i+1<<" 组数字！";
        while(!(cin>>dc[i]))
        {
            cin.clear();
            while(cin.get()!='\n')
                continue;
            cout<<"请输入数字！";
        }
    }

    for(i=0; i<10; i++)
        d=d+dc[i];
    avg=d/10;
    for(i=0; i<10; i++)
    {
        if(dc[i]>avg)
            j++;
    }
    cout<<"average is : "<<avg<<" and there are "<<j<<" groups bigger than average!";
	cout<<"nice!";
}

