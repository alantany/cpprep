#pragma once
#include"d:\cpp\gitrep\fc2.h"
#include<iostream>
class fc1
{
public:
	fc1() = default;
	void  disp(const fc2 &) const;
	void set(int,int,int,fc2&);
	void reset(fc2&);
};
