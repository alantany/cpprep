#pragma once
#include<iostream>
#include<string>
using namespace std;
class myclass
{
public:
	myclass::myclass() { cout << "Ĭ�Ϲ��캯��!" << endl; };
	myclass::myclass(int) :myclass() { cout << "int���캯��!" << endl; };
	myclass::myclass(string) :myclass(5) { cout << "string���캯��!" << endl; };
};
