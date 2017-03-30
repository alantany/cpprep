#include<string>
#include<iostream>
#include"d:\cpp\gitrep\sale_data.h"
std::string sale_data::isbn() const {
	return bookno;
};
sale_data& sale_data::conbin(const sale_data &rhs)
{
	unit_sold += rhs.unit_sold;
	price += rhs.price;
	return *this;
};
