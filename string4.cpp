#include<string>
#include<sstream>
#include<iostream>
#include"d:\cpp\gitrep\cpprep\string4.h"
using namespace std;
void replace(string s, string  oldv, string newv) {
	istringstream stream(s);
	string s1, s2;
	while (stream >> s1) {
		if (s1 == oldv)
			s1 = newv;
		s2.append(s1+" ");
	
	}
	std::cout << s2 << std::endl;
}

