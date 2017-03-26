#include<initializer_list>
#include<iostream>
int initf(std::initializer_list<int> il)
{
	int i = 0;
	for (auto msg=il.begin();msg != il.end();msg++)
	{
		i += *msg;
	}
	return i;
}