int intp(int x, int *p)
{
	if (x >= *p)
		return x;
	else
		return *p;
}

void chv(int *p1, int *p2)
{
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}