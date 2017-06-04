#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	vector<int> vi = { 1,2,3,4,5,6,7,8,9,10 };
	int resize=10;
	for_each(vi.begin(), vi.end(), [resize](int &i) {i = i*resize; return i; });
	auto loc = vi.begin();
	for (; loc != vi.end(); ++loc)
		cout << *loc << " ";
	cout << endl;

	system("pause");
}