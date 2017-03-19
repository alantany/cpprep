#include<iostream>
#include<string>
#include"d:\cpp\gitrep\f5.h"
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	const string &rs = s;
	if (f5(rs) == 1)
		cout << "有大写字母!" << endl;
	else
		cout << "没有大写字母!" << endl;
	//cout << s << endl;

	system("pause");
}