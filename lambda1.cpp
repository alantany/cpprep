#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	cout << "input size of string:";
	vector<string>::size_type sz,sb;
	cin >> sz >> sb;
	cout << sz << " "<<sb << endl;
	vector<string> vs = { "alan", "tom", "th", "alantany", "thmas", "tracy" };
	for (sz = 0; sz < vs.size(); sz++) {
		if(vs[sz].size()>2&vs[sz].size()<sb)
		cout << vs[sz] << " ";
	}

	cout << endl;
	auto loc = find_if(vs.begin(), vs.end(), [sz,sb](string &s) {return (s.size()> sz&&s.size()<sb); });
	//cout << *loc << endl;

	system("pause");
}
