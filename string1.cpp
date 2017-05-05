#include<string>
#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<char> vc = { 'a','b','c','d' };
	string s;
	
	for (auto a : vc)
		s.push_back(a);
	cout << s<<endl;

	string ss;
	ss.reserve(100);
	cout << ss.capacity() << endl;
	system("pause");

}