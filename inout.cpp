#include<istream>
#include<string>
#include"d:\cpp\gitrep\inout.h"
std::istream &person::in(std::istream &is,person &s1)
{
	is >> s1.name >> s1.address;
	return is;
}
std::ostream &person::out(std::ostream &os, person &s2)
{
	os << s2.name << " " << s2.address;
	return os;
}