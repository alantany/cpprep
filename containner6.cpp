#include<vector>
#include<iostream>
using namespace std;
int main() {
	vector<int> vi = { 1,2,3,4,5,6,7,8,9,10 };
	auto itb = vi.begin();
	//auto ite = vi.end();
	while (itb !=vi.end()) {
		if (!(*itb % 2)) {
			itb=vi.insert(itb, *itb);
			itb = itb + 2;
		}
		else {
			itb=vi.erase(itb);
		}
	}
	for (auto a : vi)
		cout << a << " ";
	cout << endl;

	system("pause");
}