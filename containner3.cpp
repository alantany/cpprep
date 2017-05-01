#include<iostream>
#include<list>
using namespace std;
int main() {
	list<int> li = { 1,2,3,4 };
	li.pop_front();
	li.pop_back();
	for (auto a : li)
		cout << a << " ";

	cout << endl;

	system("pause");
}