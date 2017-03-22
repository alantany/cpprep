#include<iostream>
#include"d:\cpp\gitrep\intp.h"
using namespace std;
int main()
{
	int x, y;
	cout << "please input 2 numbers:";
	cin >> x >> y;
	cout << "x= " << x << "  " << "y= " << y<<endl;
	cout <<"the bigger one is: "<< intp(x, &y)<<endl;

	chv(&x,&y);
	cout << "ofer change,now: "<<"x= " << x << "  " << "y= " << y << endl;
	system("pause");
}