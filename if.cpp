#include<iostream>
using namespace std;
int main()
{
	char ch;
	while (cin >> ch)
	{
		if (ch == 'a')
			cout << "这是一个元音字母!" << endl;
		else if (ch == 'e')
			cout << "这是一个元音字母!" << endl;
		else if (ch == 'i')
			cout << "这是一个元音字母!" << endl;
		else if (ch == 'o')
			cout << "这是一个元音字母!" << endl;
		else if (ch == 'u')
			cout << "这是一个元音字母!" << endl;
		else if (ch == 'q')
		{
			cout << "bye!" << endl;
			break;
		}
		else
			cout << "这不是元音字母!" << endl;

	}
	system("PAUSE");
}