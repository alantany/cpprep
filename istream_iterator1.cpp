#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main() {
	istream_iterator<int> si(cin), eof;
	cout << *si << endl;
	cout << *eof << endl;
	//cout << *(eof) << endl;
	vector<int> vi(si, eof);
	for (auto loc = vi.begin(); loc != vi.end();)
	{
		cout << *loc++ << endl;
	}

	system("pause");
}