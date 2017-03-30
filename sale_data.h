#include<string>
#pragma once
struct sale_data
{
	std::string bookno;
	int unit_sold;
	double price;
	std::string isbn() const ;
	sale_data & conbin(const  sale_data&) ;
};
