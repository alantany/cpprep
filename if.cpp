#include<iostream>
using namespace std;
int main()
{
	char ch;
	while (cin >> ch)
	{
		if (ch == 'a')
			cout <<ch<< " ��һ��Ԫ����ĸ!" << endl;
		else if (ch == 'e')
			cout <<ch<< " ��һ��Ԫ����ĸ!" << endl;
		else if (ch == 'i')
			cout <<ch<< " ��һ��Ԫ����ĸ!" << endl;
		else if (ch == 'o')
			cout <<ch<< " ��һ��Ԫ����ĸ!" << endl;
		else if (ch == 'u')
			cout <<ch<< " ��һ��Ԫ����ĸ!" << endl;
		else if (ch == 'q')
		{
			cout << "bye!" << endl;
			break;
		}
		else
			cout << ch<<" ����Ԫ����ĸ!" << endl;

	}
	system("PAUSE");
}