#include<iostream>
#include<string>
#include"d:\cpp\gitrep\initializer_list.h"
using namespace std;
int main()
{
	string s1 = "alan";
	string s2 = "alantany";
	if (s1 < s2)
		cout<<initf({ 0,1,2});
	else
		cout<<initf({ -1,0 });

	system("pause");
}