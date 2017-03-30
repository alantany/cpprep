#pragma once
#include<istream>
#include<string>
struct person
{
	std::string name, address;
	std::istream &in(std::istream &,person &);
	std::ostream &out(std::ostream &,person &);
};
