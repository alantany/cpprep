#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main() {
	list<int> l1 = { 2,2,3 };
	list<int> l2 = { 1,2,3,3 };
	vector<int> v1 = { 1,2,3,4 };
	vector<int> v2 = { 1,2,4,4 };
	if (l1 < l2)
		cout << "smaller!" << endl;
	else if (l1 == l2)
		cout << "equal!" << endl;
	else
		cout << "bigger" << endl;

	system("pause");



}