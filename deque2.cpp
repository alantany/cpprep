#include<iostream>
#include<deque>
#include<string>
using namespace std;
int main() {
	deque<string> ds;
	string s;
	while (cin >> s)
		ds.push_front(s);
		//ds.push_back(s);
	auto db = ds.begin();
	auto de = ds.end();
	for (auto it = db; it != de; it++)
		cout << *it << " ";
	cout << endl;

	system("pause");
}