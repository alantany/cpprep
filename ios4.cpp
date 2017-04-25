#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	string fname = "d:\\cpp\\a.txt";
	ifstream in(fname, 1);
	string s;
	vector<string> vs;
	while (in >> s) {
		vs.push_back(s);
	}
	for (int i = 0; i < vs.size(); i++){
	cout << vs[i]<<endl;
	}
	
	system("pause");
}