#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string fname = "d:\\cpp\\hlm.txt";
	ifstream in(fname, 1);
	string s;
	ofstream out(fname + ".bak",2);
	while (in>>s) {
		out << s;
	}
	in.close();
	out.close();

	system("pause");
}