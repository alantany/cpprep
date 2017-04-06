#pragma once
class window
{
public:
	int row, col;
	char cursor;
	window set(int, int);
	window set(char);
	window move(int, int);
};