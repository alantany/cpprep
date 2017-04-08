#include<iostream>
#include"d:\cpp\gitrep\classarea.h"
int main()
{
	area a;
	a.set(10, 20, 30);
	std::cout << a.x << " " << a.y << " " << a.z << std::endl;
	system("pause");
}