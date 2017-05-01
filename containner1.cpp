#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;
int main() {
	vector<int> v = { 1,2,4,5 };
	auto lb = v.begin();
	v.insert(lb, 0);
	lb = v.begin();
	v.insert(lb + 3, 3);
	auto le = v.end();
	v.insert(le , 6,6);
	for (auto a : v)
		cout << a << " ";


	system("pause");
}