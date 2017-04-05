#include<iostream>
#include<string>
#include"d:\cpp\gitrep\cons.h"
int main()
{
	cons s(10, 20);
	std::string s1(10,'o');
	std::cout << s.show(s.show_in()) << std::endl;
	std::cout << s1<< std::endl;


	system("pause");
}