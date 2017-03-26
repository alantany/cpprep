int  fbr(int x)
{
	while (x > 0)
	{
		if (x == 1 || x == 2)
		{
			return 1;
		}
		else
		{
			return(fbr(x - 1) + fbr(x - 2));
		}

	}
}
