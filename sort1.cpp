#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
bool shorter(const string&, const string&);
int main() {
	vector<string> vs= {"the","quick","fox","jumps","over","the","slow","red","turtle"};
	sort(vs.begin(), vs.end());
	auto loc = vs.begin();
	for (; loc != vs.end(); loc++)
		cout << *loc << " ";
	stable_sort(vs.begin(), vs.end(), shorter);
	loc = vs.begin();
	cout << endl;
	for (; loc != vs.end(); loc++)
		cout << *loc << " ";
	cout << endl;
	sort(vs.begin(), vs.end(), shorter);
	loc = vs.begin();
	for (; loc != vs.end(); loc++)
		cout << *loc << " ";
	cout << endl;
	system("pause");
}
bool shorter(const string &s1, const string &s2) {
	return s2.size() > s1.size();
}
