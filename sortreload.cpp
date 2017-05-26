#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
bool isshorter(const string &, const string &);
int main() {
	vector<string> vs = { "alan","alantany","tom","thomas" };
	sort(vs.begin(), vs.end(), isshorter);
	auto loc = vs.begin();
	for (; loc != vs.end(); loc++)
		cout << *loc << " ";
	cout << endl;
	reverse(vs.begin(), vs.end());
	for (loc = vs.begin(); loc != vs.end(); loc++)
		cout << *loc << " ";
	cout << endl;
	system("pause");
}

bool isshorter(const string &s1, const string &s2) {
	return s1.size() < s2.size();
}