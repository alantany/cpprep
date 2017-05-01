#include<iostream>
#include<deque>
using namespace std;
int main() {
	deque<int> di = { 1,2,3,4 };
	di.pop_front();
	di.pop_front();
	for (auto a : di)
		cout << a << " ";
	di.clear();
	for (auto a : di)
		cout << a << " ";

	system("pause");
}