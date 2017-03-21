#include<iostream>
void a2(char *begin, char *end)
{
	while (begin != end)
	{
		if (!(*begin))
			break;
		std::cout << *begin++;
	}
	std::cout << std::endl;

}