#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int add(int,int);
int score(int *p,int );
main()
{
    string a[5]= {"ds","dassfda","dsa","sdfaf","fdas"};
    cout<<sizeof(a);
    //cout<<score(a,sizeof(a)/sizeof(int));
}
    scanf(): intt
    printf(): intt

int score(int *p,int size)
{
    int total=0;
    for(int i=0; i<size; i++)
        total=total+p[i];
    return total;
}
