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
	cout << "一共有 " << i << " 个 " << '-'<< endl;

	system("pause");
}