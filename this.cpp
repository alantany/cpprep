#include"d:\cpp\gitrep\this.h"
window window::set(int x, int y)
{
	window::row = x;
	window::col = y;
	return *this;
}