#include<iostream>
#include<string>
#include"d:\cpp\gitrep\cpprep\string4.h"
using namespace std;
int main() {
	string s = "I thx you , thx thx !";
	cout << s << endl;
	string oldv = "thx";
	string newv = "thanks";
	replace(s, oldv, newv);

	system("pause");
}