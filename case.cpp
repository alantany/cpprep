#include<iostream>
using namespace std;
int main()
{
	char ch;
	while (cin >> ch)
	{
		switch (ch)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			cout << "这是一个元音字母!" << endl;
			break;
		case 'Q':
		case 'q':
			cout << "bye~" << endl;
			return 0;

		default:
			cout << "这不是元音字母!" << endl;
			break;
		}
	}
	system("pause");

}