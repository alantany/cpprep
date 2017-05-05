#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;
int main() {
	string up = "bdfhjkklt";
	string down = "gpqy";
	ifstream in("D:\\cpp\\gitrep\\words.txt");
	if (in)
		cout << "file opened successfully!" << endl;
	else
		cout << "file open failed!" << endl;
	string file;
	string s;
	while (getline(in, s))
		file += s;
	//cout << file << endl;
	string ss;
	string tmp=" ";
	istringstream words(file);
	//cout << words;
	while (words >> ss) {
		
		if (ss.find_first_of(up)==string::npos && ss.find_first_of(down)==string::npos)
		{
			if (ss.size() > tmp.size())
				tmp = ss;
		}

	}
	cout << "符合条件的最长单词是: "<<tmp << endl;

	system("pause");
}