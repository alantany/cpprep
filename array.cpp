#include<iostream>
using namespace std;
int main()
{
	char yy[10] = { 'a','e','i','o','u','A','E','I','O','U' };
	char word;
	int cty = 0,ctf=0;
	while (cin >> word)
	{
		for (auto tmp : yy)
		{
			if (word == tmp)
				cout << word << " ��һ��Ԫ����ĸ." << endl;
			++cty;
		}
		for (auto tmp : yy)
		{
			if (word != tmp)
				cout << word << " ����һ��Ԫ����ĸ." << endl;
			++ctf;
		}
	}
	cout << "���� " << cty << " ��Ԫ����ĸ�� " << ctf << " ��������ĸ.";
	system("pause");
}