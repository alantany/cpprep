#include<iostream>
#include<string>
//using namespace std;

void f3 (const std::string &s1,const std::string &s2)
{
	if (s1.size() == s2.size())
		 std::cout<< s1 << " ���� " << s2 << std::endl;
	else if (s1.size() < s2.size())
		std::cout <<s1<< " С�� " <<s2<< std::endl;
	else
		std::cout << s1 << " ���� " << s2 << std::endl;
}