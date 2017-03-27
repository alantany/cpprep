#include<iostream>
#include<string>
using namespace std;
int main()
{
	struct sales_data
	{
		string isbn;
		unsigned unit_sales;
		double avg;
	};
	sales_data data1, data2;
	if (cin >> data1.isbn >> data1.unit_sales >> data1.avg)
	{
		while (cin >> data2.isbn >> data2.unit_sales >> data2.avg)
		{
			if (data1.isbn == data2.isbn)
			{
				data1.avg += data2.avg;
				data1.unit_sales += data2.unit_sales;
				cout << data1.isbn << " " << data1.unit_sales << " " << data1.avg;
			}
			else
			{
				data1.isbn = data2.isbn;
				data1.avg = data2.avg;
				data1.unit_sales = data2.unit_sales;
				cout << data1.isbn << " " << data1.unit_sales << " " << data1.avg << endl;

			}

		}
		//cout << data1.isbn<<" "<<data1.unit_sales << " " << data1.avg << endl;
	}
	else
		cout << "no data?" << endl;
	system("pause");
}