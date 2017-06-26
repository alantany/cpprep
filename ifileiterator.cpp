#include<fstream>
#include<vector>
#include<string>
#include<iostream>
#include<iterator>
using namespace std;
int main() {
	ifstream in("D:\\cpp\\gitrep\\words.txt");
	if (in)
		cout << "file open successfully!" << endl;
	else
		cout << "file open failed!" << endl;
	istream_iterator<string> is(in),eof;
	vector<string> vs;
	while (is != eof)
		vs.push_back(*is++);
	in.close();
	for (auto word : vs)
		cout << word;
	cout << endl;
	ofstream  of("D:\\cpp\\gitrep\\words_bak.txt");
	if(of)
		cout << "file copy successfully!" << endl;
	else
		cout << "file copy failed!" << endl;
	ostream_iterator<string> oi(of);
	copy(vs.begin(), vs.end(), oi);
	of.close();
	system("pause");

}