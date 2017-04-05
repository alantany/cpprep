#pragma once
class stru1
{
	friend int show(stru1);
	friend int show2(stru1);
public:
	stru1(int m, int n);
	int  new_show(int show);
private:
	int x;
	int y;
};
int show(stru1);
int show2(stru1);


