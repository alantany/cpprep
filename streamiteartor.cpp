#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main() {
	vector<int> vi;
	cout << "please input some number:";
	istream_iterator<int>  si(cin);
	istream_iterator<int> eof;
	while (si != eof) {
		vi.push_back(*si);
		cout << *si << " ";
		si++;
	}
	for (auto loc = vi.begin(); loc != vi.end(); loc++)
		cout << *loc << " ";

	system("pause");

}