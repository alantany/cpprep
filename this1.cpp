#include"d:\cpp\gitrep\this1.h"
#include<iostream>
using namespace std;
this1 &this1::set1(int a)
{
	this1::x = a;
	return *this;
}
this1 &this1::set2(int b)
{
	this1::y = b;
	return *this;
}
this1 &this1::set3(int c)
{
	this1::z = c;
	return *this;
}
void this1::show()
{
	cout << "x= " << x << endl;
	cout << "y= " << y << endl;
	cout << "z= " << z << endl;
}