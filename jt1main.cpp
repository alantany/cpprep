#include<iostream>
#include"d:\cpp\gitrep\jt1.h"
using namespace std;
int main()
{
	int x = 10, y = 20;
	jt1 j1;
	jt1 *j2=&j1;
	cout << jt1::plus() << endl;
	cout << j1.plus() << endl;
	cout << j2->plus() << endl;

	system("pause");
}