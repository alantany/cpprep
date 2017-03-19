#include<iostream>
#include<iostream>
#include"d:\cpp\gitrep\f6.h"
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	cout << s << endl;
	string &rs = s;
	f6(rs);
	cout << s << endl;

	system("pause");
}