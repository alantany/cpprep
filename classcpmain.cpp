#include<iostream>
#include"d:\cpp\gitrep\classcp.h"
using namespace std;

int main()
{
	sale_data s1,s2,sum;
	s1.price = 40.2;
	s1.unit_sold = 20;
	s2.price = 20.4;
	s2.unit_sold = 100;
	cout<<s1.add(s1, s2).price<<" "<<s1.add(s1,s2).unit_sold<<endl;

	system("pause");
}