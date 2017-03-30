#include"d:\cpp\gitrep\person.h"
#include<iostream>
person& person::add()
{
	std::cout << "please intput name:";
	std::cin >> person::name;
	std::cout << "please input address:";
	std::cin >> person::address;
	return *this;
};
person& person::info1(const person &pi)
{
	//person::name = pi.name;
	//person::address = pi.address;
	*this = pi;
	return *this;
};
void person::info2(const person &pi)
{
	std::cout << pi.name << " " << pi.address << std::endl;


};