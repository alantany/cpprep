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
			cout << "����һ��Ԫ����ĸ!" << endl;
			break;
		case 'Q':
		case 'q':
			cout << "bye~" << endl;
			return 0;

		default:
			cout << "�ⲻ��Ԫ����ĸ!" << endl;
			break;
		}
	}
	system("pause");

}