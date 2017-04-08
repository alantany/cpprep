#include<iostream>
#include"d:\cpp\gitrep\farea.h"
using namespace std;

int main()
{
	farea f;
	f.set(10, 20, 30);
	cout << f.x << endl;
	cout << f.y << endl;
	cout << f.z << endl;

	system("pause");
}