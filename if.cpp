#include<iostream>
using namespace std;
int main()
{
	char ch;
	while (cin >> ch)
	{
		if (ch == 'a')
			cout << "����һ��Ԫ����ĸ!" << endl;
		else if (ch == 'e')
			cout << "����һ��Ԫ����ĸ!" << endl;
		else if (ch == 'i')
			cout << "����һ��Ԫ����ĸ!" << endl;
		else if (ch == 'o')
			cout << "����һ��Ԫ����ĸ!" << endl;
		else if (ch == 'u')
			cout << "����һ��Ԫ����ĸ!" << endl;
		else if (ch == 'q')
		{
			cout << "bye!" << endl;
			break;
		}
		else
			cout << "�ⲻ��Ԫ����ĸ!" << endl;

	}
	system("PAUSE");
}