#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	vector<string> vs = { "alan","tom","peter","alan","tracy","tom","alantany","mike","une" };
	vector<string>::size_type sz = 4;
	sort(vs.begin(), vs.end(), [](string &s1, string &s2) {return s1.size() < s2.size(); });
	for (auto loc = vs.begin(); loc != vs.end(); ++loc)
		cout << *loc << " ";
	cout << endl;
	stable_sort(vs.begin(), vs.end(), [](const string &s1, const string &s2) {return s1.size() < s2.size(); });
	for (auto loc = vs.begin(); loc != vs.end(); ++loc)
		cout << *loc << " ";
	cout << endl;
	auto del=unique(vs.begin(), vs.end());
	for (auto loc = vs.begin(); loc != vs.end(); ++loc)
		cout << *loc << " ";
	cout << endl;
	vs.erase(del, vs.end());
	for (auto loc = vs.begin(); loc != vs.end(); ++loc)
		cout << *loc << " ";
	cout << endl;
	auto loc = find_if(vs.begin(), vs.end(), [sz](string &s) {return s.size() > sz; });
	cout << *loc << endl;

	system("pause");
}
