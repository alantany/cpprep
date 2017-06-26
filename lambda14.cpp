#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
#include<vector>
using namespace std;
int main() {
	list<int> li1 = { 1,1,1,2,3,4,4,5 };
	list<int> li2;
	unique_copy(li1.begin(), li1.end(), inserter(li2,li2.begin()));
	for (auto loc = li2.begin(); loc != li2.end(); ++loc)
		cout << *loc << " ";
	cout << endl;
	unique_copy(li1.begin(), li1.end(), front_inserter(li2));
	for (auto loc = li2.begin(); loc != li2.end(); ++loc)
		cout << *loc << " ";
	cout << endl;
	vector<int> vi;
	unique_copy(li1.begin(), li1.end(), inserter(vi, vi.begin()));
	for (auto loc = vi.begin(); loc != vi.end(); ++loc)
		cout << *loc << " ";
	cout << endl;

	system("pause");
}