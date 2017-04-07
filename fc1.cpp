#include"d:\cpp\gitrep\fc1.h"
#include"d:\cpp\gitrep\fc2.h"
void fc1::disp(const fc2 &c2) const
{
	std::cout << "c=" << c2.c << " " << "x=" << c2.x << " " << "y=" << c2.y << std::endl;
};

void fc1::set(int m, int n,int k,fc2 &c2)
{
	c2.c = k;
	c2.x = m;
	c2.y = n;
};
void fc1::reset(fc2 &c)
{
	c.reset();
}