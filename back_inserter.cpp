#include<vector>
#include<iterator>
#include<iostream>
using namespace std;
int main() {
	vector<int> vi;
	auto it = back_inserter(vi);
	*it = 10;
	//cout << *(vi.begin()) << endl;
	fill_n(it, 10, 20);
	auto loc = vi.begin();
	for (; loc != vi.end(); loc++)
		cout << *loc << endl;

	system("pause");
}