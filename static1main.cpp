#include<iostream>
#include"d:\cpp\gitrep\static.h"
using namespace std;
int main()
{
	static1 st1;
	cout << static1::pub << endl;
	cout << st1.pub << endl;
	
	system("pause");
}