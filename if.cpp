#include<iostream>
using namespace std;
int main()
{
	char ch;
	while (cin >> ch)
	{
		if (ch == 'a')
			cout <<ch<< " 是一个元音字母!" << endl;
		else if (ch == 'e')
			cout <<ch<< " 是一个元音字母!" << endl;
		else if (ch == 'i')
			cout <<ch<< " 是一个元音字母!" << endl;
		else if (ch == 'o')
			cout <<ch<< " 是一个元音字母!" << endl;
		else if (ch == 'u')
			cout <<ch<< " 是一个元音字母!" << endl;
		else if (ch == 'q')
		{
			cout << "bye!" << endl;
			break;
		}
		else
			cout << ch<<" 不是元音字母!" << endl;

	}
	system("PAUSE");
}