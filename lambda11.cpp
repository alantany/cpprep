#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
bool shorter(string &, string &);
int main() {
	vector<string> vs = { "ab","abc","abcd","a","aa","abcdef" };
	for (auto loc = vs.begin(); loc != vs.end(); ++loc)
		cout << *loc << " ";
	cout << endl;
	sort(vs.begin(), vs.end());
	for (auto loc = vs.begin(); loc != vs.end(); ++loc)
		cout << *loc << " ";
	cout << endl;
	sort(vs.begin(), vs.end(), shorter);
	for (auto loc = vs.begin(); loc != vs.end(); ++loc)
		cout << *loc << " ";
	cout << endl;

	system("pause");

}
bool shorter(string &s1, string &s2) {
	return s1.size() < s2.size();
}