#include<vector>
#include<string>
#include<iostream>
#include<iterator>
using namespace std;
int main() {
	vector<string> vs(1);
	fill_n(vs.begin(), vs.size(), "abcdefg");
	cout << *(vs.begin()) << endl;
	vector<int> vi(10);
	//vector<int>::iterator loc;
	auto loc = vi.begin();
	fill_n(vi.begin(), vi.size()-3, 123);
	for (;loc != vi.end();loc++)
		cout << *loc << endl;

	system("pause");
}