#include<vector>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
int main() {
	vector<int> vi = { 1,-2,3,0,-4,-5,3 };
	//transform(vi.begin(), vi.end(), vi.begin(), [](int i) {return (i > 0) ? i : -i; });
	transform(vi.begin(), vi.end(), vi.begin(), [](int i) {return i*10; });
	for (auto loc = vi.begin(); loc != vi.end(); ++loc)
		cout << *loc << " " ;
	cout << endl;
	string s = "aBCdEfG";
	//transform(s.begin(), s.end(), s.begin(), [](char &c) {return c - 32;  });
	transform(s.begin(), s.end(), s.begin(), [](char c) {return (isupper(c) ? c + 32:c); });
		cout << s<< endl;


	system("pause");
}