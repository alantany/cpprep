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
			cout << c << " ��Ԫ����ĸ" << endl;
		}
	}
	cout << "һ���� " << j << "��Ԫ����ĸ!" << endl;

	system("pause");
}