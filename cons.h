#pragma once
class cons
{
public:
	cons()=default;
	cons(int m, int n) :x(m), y(n) {};
	int show(int show_in);
	int show_in()
	{
		return x + y;
	}


private:
	int x, y;

};

