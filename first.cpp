#include<stdio.h>
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
    cout<<"�����������ݣ�����-1����:"<<'\n';
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
    cout<<"�����Ǳ��е�����:"<<'\n';;
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
//    cout<<"������׼��ɾ����ֵ:"<<'\n';
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

int main()
{
    MY *p,*p_d;
    int n;
    p=creat();
    print(p);
    cout<<'\n'<<"������ɾ����ֵ:";
    cin>>n;
    p_d=del(p,n);
    print(p_d);
}
