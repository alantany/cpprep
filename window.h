#pragma once
#include<string>
class window
{
public:
	using pos = std::string::size_type;
	window() = default;
	window(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht*wd, c) {};
	char get() const { return contents[cursor]; };
	inline char get(pos ht, pos wd) const;
	window &move(pos x, pos y);

	int height = 0;
	int width = 0;
	int cursor = 0;
	std::string contents;
private:

};