#include<iostream>
#include"d:\cpp\gitrep\rl2.h"
using namespace std;
int main()
{
	int x = 10;
	int &rx = x;
	const int &crx = x;
	int *p = &x;
	const int *cp = &x;
	f2(rx);
	f2(crx);
	f2(p);
	f2(cp);

	system("pause");
}