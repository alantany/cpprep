#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string fname = "d:\\cpp\\hlm.out";
	ifstream in(fname,1);
	ofstream out(fname + ".bak");
	vector<string> vs;
	string s;
	while (getline(in,s)) {
		//s=in.getline;
		vs.push_back(s);
	};
	for (int i = 0; i < vs.size(); i++)
		//cout << vs[i] << endl;
		out << vs[i] << endl;
	cout << "�ļ����Ƴɹ�!" << endl;

	system("pause");
}