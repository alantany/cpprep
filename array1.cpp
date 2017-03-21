#include<iostream>
using namespace std;
int main()
{
	char c[10] = { 'a',' ','c','d',' ','e' };
	char *p = c;
	if(p)
	{
		while (*p)
		{
			cout << *p++;
		}
	}
	system("pause");
}