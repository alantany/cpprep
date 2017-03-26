#include<iostream>
#include"d:\cpp\gitrep\ap.h"
using namespace std;
int main()
{
	int a[5] = { 2,1,5,3,0 };
	cout<<sizeof(a)/sizeof(int)<<endl;
	ap(a);
	for (auto c = begin(a); c != end(a); c++)
		cout << *c << " ";
	system("pause");
}