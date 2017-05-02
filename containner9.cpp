#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> vi;
	cout << "size =" << vi.size() << endl;
	cout << "capacity =" << vi.capacity() << endl;
	for (int i = 0; i < 10; i++)
		vi.push_back(i);
	cout << "size =" << vi.size() << endl;
	cout << "capacity =" << vi.capacity() << endl;
	vi.reserve(50);
	cout << "size =" << vi.size() << endl;
	cout << "capacity =" << vi.capacity() << endl;
	system("pause");
}