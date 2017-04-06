#include"d:\cpp\gitrep\this.h"
window window::move(int x, int y)
{
	window::row = x;
	window::col = y;
	return *this;
}