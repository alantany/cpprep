#include<vector>
#include<string>
#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;
int main() {
	vector<int> vi = { 1,2,3,4,3,0,3,4,5,6 };
	replace(vi.begin(), vi.end(), 3, 9);
	for (int i = 0; i < vi.size(); i++)
		cout << vi[i] << endl;s
	string s = "alantanyalantanyalantany";
	replace(s.begin(), s.end(), 'a', 'm');
	cout << s << endl;

	system("pause");
}