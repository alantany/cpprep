#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define MY struct mystr
using namespace std;

MY
{
    int x;
    MY *next;
};

MY *creat()
{
    MY *head,*p1,*p2;
    head=NULL;
    int n=0;
    cout<<"请输入表的数据，输入-1结束:"<<'\n';
    p1=p2=new mystr;
    cin>>p1->x;
    while(p1->x!=-1)
    {
        n++;
        if(n==1) head=p1;
        else
        {
            p2->next=p1;
            p2=p1;
            p1=new mystr;
            cin>>p1->x;
            //cout<<p1->x;
        }
    }
    p2->next=NULL;
    return(head);
};

void print(MY *head)
{
    MY *p;
    p=head;
    cout<<"下面是表中的数据:"<<'\n';;
    while(p!=NULL)
    {
        cout<<p->x<<'\t';
        p=p->next;
    }
    cout<<'\n';
    p=head;
};
MY *del(MY *head,int n)
{
    MY *p1,*p2;
//    cout<<"请输入准备删除的值:"<<'\n';
    p1=head;
    while(p1->next!=NULL)
    {
        if(p1->x!=n)
        {
            p2=p1;
            p1=p1->next;

        }
        else if(p1->x==n&&head==p1)
        {
            head=p1->next;
            p2=head;
            p1=head;
            //cout<<'\n'<<head->x<<'\t'<<p1->x<<'\t'<<p2->x;
            //return(head);
        }
        else
        {
            p2->next=p1->next;
            //p2=p1;
            p1=p1->next;
            //cout<<'\n'<<head->x<<'\t'<<p1->x<<'\t'<<p2->x<<'\n';
        }
    }
    p2->next=NULL;
    //cout<<'\n'<<head->x<<'\t'<<p1->x<<'\t'<<p2->x<<'\n';
    return(head);
}

MY *insert(MY *head)
{
    MY *p0;
    //p1=head;

    //p1=head;
    int a;
    cout<<'\n'<<"请输入数据,-1结束"<<'\n';
    while(1)
    {
        p0 = (struct mystr*)malloc(sizeof(struct mystr));
        cin>>a;
        if(a==-1) break;
        p0->x=a;
        p0->next=head;
        head=p0;
    }
    return(head);
}

int main()
{
    MY *p,*p_d,*p_i;
    int n;
    p=creat();
    print(p);
    p_i=insert(p);
    print(p_i);
    cout<<'\n'<<"请输入删除的值:";
    cin>>n;
    p_d=del(p_i,n);
    print(p_d);

}
