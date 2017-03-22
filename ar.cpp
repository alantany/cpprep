#include<iostream>
void ar(int(&ar)[10])
{
	for (auto r : ar)
		if (r)
			std::cout << r << std::endl;
}

void arc(const int a[10])
{
	for (size_t i = 0; i != 10; i++)
		if (a[i])
			std::cout << a[i] << std::endl;
}