#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
int main() {
	string fname = "d:\\cpp\\hlm.txt";
	string s;
	vector<string> vs;
	ifstream in(fname, ios::in);
	ofstream out(fname+".bak2", ios::app);
	while (in >> s) {
		vs.push_back(s);
	}
	in.close();
	for (int i = 0; i < vs.size(); i++) {
		out << vs[i];
	}
	out.close();
	system("pause");
}