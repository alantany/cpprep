#include<iostream>
#include<list>
using namespace std;
int main() {
	list<int> li = { 1,2,3,4,5,6,7,8,9,10 };
	auto it = li.begin();
	while (it != li.end()) {
		if (*it % 2) {
			li.insert(it, *it++);
			it++;
			//it = it++;
		}
		else {
			it = li.erase(it);
		}
	}
	cout << li.size() << endl;
	for (auto a:li)
		cout << a << " ";
	cout << endl;
	system("pause");
}