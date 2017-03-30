#include<iostream>
#include<string>
#include"d:\cpp\gitrep\sale_data.h"
using namespace std;
int main()
{

	sale_data total;
	if (cin >> total.bookno >> total.unit_sold >> total.price)
	{
		sale_data trans;
		while (cin >> trans.bookno >> trans.unit_sold >> trans.price)
		{
			if (total.bookno == trans.bookno)
			{
				total.conbin(trans);
				cout <<total.isbn()<< " " << total.unit_sold << " " << total.price;
			}
			else
			{
				total.bookno = trans.bookno;
				total.unit_sold = trans.unit_sold;
				total.price = trans.price;
				cout << total.isbn() << " " << total.unit_sold << " " << total.price;
			}
		}
	}

	system("pause");
}