#pragma once
#include"d:\cpp\gitrep\fc1.h"
class fc2
{
	friend class fc1;
public:
	fc2()
	{
		c = 0;
		x = 0;
		y = 0;
	};
	int c;
	void reset()
	{
		c = 0;
		x = 0;
		y = 0;
	};
private:
	int x;
	int y;
};