#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
	int i = 0, j = 1;
	if (i != j)
		throw runtime_error("两个数不相同");
	cout << i + j << endl;
	system("pause");
}