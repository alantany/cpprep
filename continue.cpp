#include<iostream>
using namespace std;
int main()
{
	char ch;
	int i = 0;
	while (cin >> ch)
	{
		if (ch == 'q')
			break;
		else if (ch != '-')
			continue;
		i++;
	}
	cout << "һ���� " << i << " �� " << '-'<< endl;

	system("pause");
}