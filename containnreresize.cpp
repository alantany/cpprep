#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> vi = { 1,2,3,4,5,6,7 };
	cout << vi.size() << endl;
	vi.resize(10);
	for (auto a : vi)
		cout << a << " ";
	cout << endl;
	vi.resize(4);
	for (auto a : vi)
		cout << a << " ";
	cout << endl;
		system("pause");
}