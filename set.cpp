#include<iostream>
#include<set>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string  trans(string s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A'&&s[i] <= 'Z')
			s[i] -= ('A' - 'a');
		return s;
	}

}
int main() {
	set<string> ss = { "alan","peter","tom","Mike","Alan","jack","mike" };
	vector<string> vs;
	for (auto loc = ss.cbegin(); loc != ss.cend(); loc++) {
		vs.push_back(trans(*loc));
		cout << *loc << " ";
	}
	cout << endl;

	sort(vs.begin(), vs.end());
	for (auto s : vs)
		cout << s << " ";
	cout << endl;
	unique(vs.begin(), vs.end());
	for (auto s : vs)
		cout << s << " ";
	cout << endl;
	system("pause");
}