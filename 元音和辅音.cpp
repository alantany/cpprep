#include<iostream>
#include<string>
using namespace std;
int main()
{
	char yy[10] = { 'a','e','i','o','u','A','E','I','O','U' };
	char word;
	int cty = 0, ctf = 0;
	string s;
	getline(cin, s);
	for (auto word : s)
	{
		for (auto tmy : yy)
		{
			if (word == tmy)
			{
				cout << word << " ��һ��Ԫ����ĸ." << endl;
				++cty;
			}
		}
	}
	for (auto word : s)
	{
		int i = 0;
		for (auto tmf : yy)
		{
			if (word == tmf)
			{
				++i;
			}
		}
		if (i == 0)
		{
			cout << word << " ����һ��Ԫ����ĸ." << endl;
			ctf++;
		}
	}
	cout << "���� " << cty << " ��Ԫ����ĸ�� " << ctf << " ��������ĸ.";
	system("pause");
}