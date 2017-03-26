#include<iostream>
#include"d:\cpp\gitrep\fb.h"
using namespace std;
void fb(int);
int fbr(int);
int main()
{
	int n;
	cout << "please input a number:";
	cin >> n;
	fb(n);
	for (int i = 1; i <= n; i++)
		cout << fbr(i) << " ";
	cout << endl;
	system("pause");
}
