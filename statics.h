#pragma once
class statics
{
public:
	 static int x;
	//int x;
	int y;
/*	statics(int m, int n)
	{
		x = m;
		y = m;
	};*/
	int show();
};
int statics::x = 10;