#pragma once
struct sale_data
{
	int unit_sold;
	double price;
	sale_data add(sale_data &, sale_data&);
};
