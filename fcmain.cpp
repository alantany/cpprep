#include<iostream>
#include"d:\cpp\gitrep\fc1.h"
#include"d:\cpp\gitrep\fc2.h"
int main()
{
	fc1 f1;
	fc2 f2;
	f1.disp(f2);
	f1.set(10, 20, 30, f2);
	f1.disp(f2);
	f1.reset(f2);
	f1.disp(f2);

	system("pause");

}