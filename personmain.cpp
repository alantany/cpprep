#include<iostream>
#include"d:\cpp\gitrep\person.h"
using namespace std;
int main()
{
	person p1,p2;
	p1.add();
	p2.info1(p1);
	cout << p2.name << " " << p2.address << endl;
	p1.info2(p1);

	system("pause");
}