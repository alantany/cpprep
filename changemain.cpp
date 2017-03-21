#include<iostream>
#include"d:\cpp\gitrep\change.h"
using namespace std;
int main()
{
	cout << "please input some charactors:";
	char c[20];
	int i = 0;
	while (cin >> c&&i==20)
	{
		i++;
	}
	char(&rc)[20] = c;
	change(rc, end(rc) - begin(rc));

	for (auto ac : rc)
		cout << ac;
	cout << endl;

	system("pause");
}