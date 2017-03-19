#include<iostream>
#include<string>
#include"d:\cpp\gitrep\f3.h"
using namespace std;
int main()
{
	string s1, s2;
	cout << "请输入第一个字串:";
	cin >> s1;
	cout << "请输入第二个字串:";
	cin >> s2;
	const string &rs1 = s1;
	const string &rs2 = s2;
	int i = 0;
	while (i < 10)
	{
		f3(rs1, rs2);
		cout << "请输入第一个字串:";
		cin >> s1;
		cout << "请输入第二个字串:";
		cin >> s2;		
		++i;
	}

	//cout << s1.size() << " " << s2.size();

	system("pause");

}