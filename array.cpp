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
				cout << word << " 是一个元音字母." << endl;
			++cty;
		}
		for (auto tmp : yy)
		{
			if (word != tmp)
				cout << word << " 不是一个元音字母." << endl;
			++ctf;
		}
	}
	cout << "共有 " << cty << " 个元音字母和 " << ctf << " 个辅音字母.";
	system("pause");
}