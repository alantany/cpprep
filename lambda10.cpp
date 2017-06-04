#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	vector<int> vi = { -10,-9,9,10 };
	transform(vi.begin(), vi.end(), vi.begin(), [](int i)->int {if (i > 0) return i; else return -i; });
	for (auto loc = vi.begin(); loc != vi.end(); ++loc)
		cout << *loc << " ";
	cout << endl;

	system("pause");

}