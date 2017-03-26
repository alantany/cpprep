#include<iostream>
void f2(int &)
{
	std::cout << "intrref para called!" << std::endl;
}
void f2(const int&)
{
	std::cout << "const intrref para called!" << std::endl;
}
void f2(int *)
{
	std::cout << "intpointer para called!" << std::endl;
}
void f2(const int *)
{
	std::cout << "const intpointer para called!" << std::endl;
}
int df(int x=10,int  y)
{
	return x-y;
}
