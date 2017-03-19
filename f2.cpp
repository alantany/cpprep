void f2i(int x)
{
	x = x * 12;
}

void f2p(int *p1, int *p2)
{
	int  temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}

void f2r(int &x)
{
	x = 10 * x;
}

