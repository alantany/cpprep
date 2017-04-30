#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main() {
	vector<int> v1 = { 1,2,3,4 };
	vector<int> v2 = { 3,4,5,6,7,8,9,0 };
	//swap(v1, v2);
	v2 = v1;
	vector<int>::iterator it1b = v1.begin();
	vector<int>::iterator it1e = v1.end();
	vector<int>::iterator it2b = v2.begin();
	vector<int>::iterator it2e = v2.end();
	for (auto a = it1b; a != it1e; a++)
		cout << *a << " ";
	cout << endl;
	for (auto b = it2b; b != it2e; b++)
		cout << *b << " ";

	system("pause");
}