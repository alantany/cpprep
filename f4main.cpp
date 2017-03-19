#include<iostream>
#include"d:\cpp\gitrep\f4.h"
using namespace std;
int main()
{
	char c;
	int i = 0;
	int &j = i;
	while (cin >> c)
	{
		if (c == '0') break;
		if (f4(c, j) == 1)
		{
			cout << c << " 是元音字母" << endl;
		}
	}
	cout << "一共有 " << j << "个元音字母!" << endl;

	system("pause");
}