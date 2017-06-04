#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	vector<string> vs = { "alantany","alan","tracy","lucy","thomas","ann" };
	for (auto loc = vs.begin(); loc != vs.end(); ++loc)
		cout << *loc << " ";
	cout << endl;
	auto lc=partition(vs.begin(), vs.end(), [](string s) {return(s.size() >= 5); });
	for (auto loc = vs.begin(); loc != vs.end(); ++loc)
		cout << *loc << " ";
	cout << endl;
	for (auto loc = vs.begin(); loc != lc; ++loc)
		cout << *loc << " ";
	cout << endl;
	lc = stable_partition(vs.begin(), vs.end(), [](string s) {return(s.size() >= 5); });
	for (auto loc = vs.begin(); loc != vs.end(); ++loc)
		cout << *loc << " ";
	system("pause");
}