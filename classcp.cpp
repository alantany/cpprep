#include"d:\cpp\gitrep\classcp.h"
sale_data sale_data::add(sale_data &s1, sale_data &s2)
{
	sale_data sum;
	sum.price = s1.price + s2.price;
	sum.unit_sold = s1.unit_sold + s2.unit_sold;
	return sum;
}

