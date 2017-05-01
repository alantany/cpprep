#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> vi = { 0, 1, 2, 3, 4 };
	auto lb = vi.begin();
	auto le = vi.end();
	cout << *lb << endl;
	vi.pop_back();
	//cout << *(vi.erase(le - 2)) << endl;
	for (auto a : vi)
		cout << a << " ";
	lb = vi.begin();
	le = vi.end();
	vi.pop_back();
	//vi.erase(lb + 1, le - 1);
	cout << endl;
	for (auto a : vi)
		cout << a << " ";
	cout<<endl << vi.size() << " ";
	vi.clear();
	cout << vi.size() << " ";
	
	system("pause");

}