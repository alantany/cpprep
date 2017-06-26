#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	vector<string> vs = { "alan","peter","tom","kate" };
	for (auto s : vs)
		cout << s << " ";
	cout << endl;
	int ai[10] = { 1,203,4,3,45,23,452,4,5 };
	for (auto i : ai)
		cout << i << " ";
	cout << endl;
	string s = "alantany";
	for (auto ch: s)
		cout << ch << " ";
	cout << endl;
	system("pause");
}