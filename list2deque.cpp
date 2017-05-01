#include<iostream>
#include<list>
#include<deque>
using namespace std;
int main() {
	list<int> li = { 1,2,3,4,5,6,7,8,9,10 };
	deque<int> di1;
	deque<int> di2;
	for (auto a : li) {
		if (a % 2 == 0)
			di1.push_back(a);
		else
			di2.push_back(a);
	}
	for (auto a : di1)
		cout << a << " ";
	cout << endl;
	for (auto a : di2)
		cout << a << " ";

	system("pause");
}