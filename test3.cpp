#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
struct ss
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void struc_f(char *,float,float,float,float);
float vol( ss *);

main()
{

    ss s= {"the size of volume!",1.243,3.24,5.34,10.34};
    struc_f(s.maker,s.height,s.width,s.length,s.volume);
    cout<<vol(&s);
}

void struc_f(char *p,float height,float width,float length,float volume)
{

    cout<<p<<endl;
    cout<<height<<endl;
    cout<<width<<endl;
    cout<<length<<endl;
    cout<<volume<<endl;
}

float vol( ss *s)
{
    s->volume=s->height*s->width*s->length;
    return s->volume;
}
