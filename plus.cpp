#include<iostream>
using namespace std;
int main()
{
	int n = 10000, i = 1,j = 1, sum = 0;
	for (; i != n; i++)
	{
		j = j*i;
		sum += j;
		cout << sum << endl;
		if (sum > 9999)
			break;
	}
	cout << sum << endl;
	cout << "最大取值是 " << i-1 << endl;
	system("pause");
}