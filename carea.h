#pragma once
typedef  int money;
class carea
{
public:
	typedef double money;
	money balance()
	{
		return bal;
	}
	//using money = int;
	//typedef double money;
private:
	money bal=20.4;
};
