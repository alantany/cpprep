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
			cout << "input A!" << endl;
			break;
		case 'b':
			cout << "input B!" << endl;
			break;
		case 'c':
			cout << "input C!" << endl;
			break;
		}
	}

	system("PAUSE");

}