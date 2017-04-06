#include"d:\cpp\gitrep\consf.h"

 int consf::show(int i) const
{

	consf::x = i;
	consf::y = i*10;
	return consf::x*consf::y;
}