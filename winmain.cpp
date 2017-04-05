#include<iostream>
#include"d:\cpp\gitrep\window.h"
#include<string>
int main()
{
	window w(800, 400, '*');
	std::cout << w.get() << std::endl;
	window w2 = w.move(30, 100);
	std::cout << w2.height<<" "<<w2.width<<" "<<w2.cursor<<" "<< std::endl;
	std::cout << w2.contents << std::endl;
	system("pause");

}