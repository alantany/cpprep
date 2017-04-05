#include<iostream>
#include"d:\cpp\gitrep\stru1.h"

int main()
{
	stru1 s1(10, 20);
	std::cout << show(s1) << std::endl;
	std::cout<<s1.new_show(show(s1))<<std::endl;
	std::cout << show2(s1) << std::endl;
	std::cout << s1.new_show(show2(s1)) << std::endl;
	system("pause");
}