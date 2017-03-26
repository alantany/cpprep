#include<iostream>
#include<string>
void  f1(int x)
{
	std::cout << "INT parameter function called!" << std::endl;
}
void  f1(double x)
{
	std::cout << "DOUBLE parameter function called!" << std::endl;
}
void  f1(std::string x)
{
	std::cout << "STRING parameter function called!" << std::endl;
}
void  f1(char x)
{
	std::cout << "CHAR parameter function called!" << std::endl;
}