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
		cout << "�д�д��ĸ!" << endl;
	else
		cout << "û�д�д��ĸ!" << endl;
	//cout << s << endl;

	system("pause");
}