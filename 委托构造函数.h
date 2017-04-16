#pragma once
#include<iostream>
#include<string>
using namespace std;
class myclass
{
public:
	myclass::myclass() { cout << "默认构造函数!" << endl; };
	myclass::myclass(int) :myclass() { cout << "int构造函数!" << endl; };
	myclass::myclass(string) :myclass(5) { cout << "string构造函数!" << endl; };
};
