#include<iterator>
#include<algorithm>
#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
int main() {
	cout << "input some number:";
	istream_iterator<int> si(cin), eof;
	vector<int> vi(si, eof);
	cout << endl;
	cout<<"sum of the numbers is :"<< accumulate(si, eof, 0) << endl;
	for (auto loc = vi.begin(); loc != vi.end(); loc++)
		cout << *loc << " ";
	cout << endl;
	sort(vi.begin(), vi.end());
	for (auto loc = vi.begin(); loc != vi.end(); loc++)
		cout << *loc << " ";
	cout << endl;
	for (auto a : vi)
		cout << a << endl;

	system("pause");
}