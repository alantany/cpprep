#include<iostream>
#include"d:\cpp\gitrep\stru1.h"
stru1::stru1(int m,int n)
{
	x = m; y = n;
}
int show(stru1 s)
{
	int x;
	return x=s.x * s.y;
}
int  stru1::new_show(int show)
{
	return 100*show;
};
int show2(stru1 s)
{
	return s.x + s.y;
}