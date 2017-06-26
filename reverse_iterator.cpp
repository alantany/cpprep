#include<vector>
#include<string>
#include<iterator>
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	vector<int> vi = { 1,4,5,2,4,6,4,7 };
	sort(vi.begin(), vi.end());
	for (auto c : vi)
		cout << c <<" ";
	cout << endl;
	sort(vi.rbegin(), vi.rend());
	for (auto c : vi)
		cout << c << " ";

	system("pause");
}