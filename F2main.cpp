#include<iostream>
#include"d:\cpp\gitrep\f2.h"
using namespace std;
int main()
{
	int x = 10;
	f2i(x);
	cout << x<<endl;
	int m = 20, n = 30;
	cout << m << " " << n << endl;
	int *p1 = &m;
	int *p2 = &n;
	f2p(p1, p2);
	cout << m << " " << n << endl;
	int &xr = x;
	cout << x << endl;
	f2r(xr);
	cout << x << endl;

	system("pause");
}