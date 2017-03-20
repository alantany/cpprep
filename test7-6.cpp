#include<iostream>
using namespace std;
int fill_array(double *,int);
void show_array(double *,int);
void reverse_arr(double *,int);
main()
{
    double ar[10];
    int n=fill_array(ar,10);
    cout<<"一共输入了 "<<n<<" 组有效数字！"<<endl;
    show_array(ar,n);
    reverse_arr(ar,n);
}

int  fill_array(double *p,int n)
{
    double x;
    int i;
    for(i=0; i<n; i++)
    {
        cout<<"请输入第 "<<i+1<<" 个double类型的数：";
        if(!(cin>>x)) break;
        p[i]=x;
    }
    return i;
}
void show_array(double *p,int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<p[i]<<" ";
    }

}
void reverse_arr(double *p,int n)
{
    cout<<endl<<"反转后的数组："<<endl;
    for(int i=n-1; i>=0; i--)
    {
        cout<<p[i]<<" ";
    }

}
