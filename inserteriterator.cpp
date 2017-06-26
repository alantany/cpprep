#include<vector>
#include<list>
#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;
int main() {
	vector<int> vi = { 1,2,3,4,5,6,7,8,9 };
	list<int> vi1 = { 0 }, vi2 = { 0 }, vi3 = { 0 };
	copy(vi.begin(), vi.end(), front_inserter(vi1));
	for (auto loc = vi1.begin(); loc != vi1.end(); ++loc)
		cout << *loc << " ";
	cout << endl;
	copy(vi.begin(), vi.end(), inserter(vi2, vi2.begin()));
	for (auto loc = vi2.begin(); loc != vi2.end(); ++loc)
		cout << *loc << " ";
	cout << endl;
	copy(vi.begin(), vi.end(), back_inserter(vi3));
	for (auto loc = vi3.begin(); loc != vi3.end(); ++loc)
		cout << *loc << " ";
	cout << endl;

	system("pause");
}