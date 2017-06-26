#include<iterator>
#include<vector>
#include<iostream>
using namespace std;
int main() {
	vector<int> vs = { 1,20,3,40,50 };
	ostream_iterator<int>  oi(cout, " ");
	for (auto s : vs)
		*oi++ = s;
	cout << endl;
	vector<int>  vi;
	ostream_iterator<int>  oii(cout," ");
	copy(vs.begin(), vs.end(), oii);
	cout << endl;
	system("pause");
}