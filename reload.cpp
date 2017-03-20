#include<iostream>
#include<string>
using namespace std;
char rep(char);
char * rep(char*);
main()
{
    char ch[10]="hello!";
    char c='a';
    cout<<rep(c)<<endl;
    cout<<rep(ch);
}
char rep(char ch)
{
    return '1';
}

char * rep(char * ch)
{
    return ch;
}
