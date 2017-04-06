#include<iostream>
#include"d:\cpp\gitrep\this.h"
int main()
{
	window w;
	w.set(100, 200);
	w.set('_');
	std::cout << w.row << " " << w.col << " " << w.cursor << std::endl;
	w.move(300, 500);
	w.set('*');
	std::cout << w.row << " " << w.col << " " << w.cursor << std::endl;
	system("pause");
}