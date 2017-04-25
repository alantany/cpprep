#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<string> vs;
	string s;
	string fname = "d:\\cpp\\hlm.txt";
	ifstream in(fname, 1);
	ofstream out(fname + "bak2", 2);
	while (in>>s) {
		//getline(in, s);
		vs.push_back(s);
	}
	in.close();
	cout << vs.size() << endl;
	for (int i = 0; i < vs.size(); i++) {
		out << vs[i];
	}
	out.close();

	system("pause");
}