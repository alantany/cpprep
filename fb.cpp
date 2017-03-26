#include<iostream>
void fb(int x)
{

	int f1 = 1, f2 = 1, fn = 0;
	for (int i = 1; i <= x; i++)
	{
		if (i == 1 || i == 2)
		{
			std::cout << 1 << " ";
		}
		else
		{
			fn = f2;
			f2 = f1 + f2;
			f1 = fn;
			std::cout << f2 << " ";
		}
	}
	std::cout << std::endl;
}
