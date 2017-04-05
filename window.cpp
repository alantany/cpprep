#include"d:\cpp\gitrep\window.h"
#include<string>
std::string::size_type pos;
inline char window::get(pos x, pos y) const
{
	return x*y;
}
window &window::move(pos r, pos c)
{
	pos row = r*width;
	window::cursor = row + c;
	return *this;
}