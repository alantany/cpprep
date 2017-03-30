#pragma once
#include<string>
struct person 
{
	std::string name;
	std::string address;
	person& add();
	person& info1( const person &pi);
	void info2(const person &);

};