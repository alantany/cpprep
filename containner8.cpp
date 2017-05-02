#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> vi = { 1,2,3,4,5,6 };
	auto it = vi.begin();
	while (it != vi.end()) {
		if (*it % 2) {
			it = vi.insert(it, *it);
			++it;
		}

		cout << vi.size() << endl;
	}

	system("pause");
}