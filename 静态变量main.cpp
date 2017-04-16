#include<iostream>
#include"d:\cpp\gitrep\æ≤Ã¨±‰¡ø.h"
using namespace std;
int jt::x;
int main()
{
	jt j1,j2;
	jt::x = 20;
	cout << &jt::x << endl;
	cout << &j1.x << endl;
	cout << &j2.x << endl;
	j1.x = 30;

	cout << &j1.x << endl;
	cout << &j2.x << endl;

	
	cout << j1.show() << endl;
	cout << j2.show() << endl;
	//cout << j1.show() << endl;

	system("pause");

}