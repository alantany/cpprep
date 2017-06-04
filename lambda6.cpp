#include<iostream>
using namespace std;
int main() {
	int v1 = 10;
	auto v = [v1] ()mutable{return ++v1; };
	cout << v() << endl;
	v();
	cout << v1<<endl;
	cout << v() << endl;
	auto vv = [&v1]() {return ++v1; };
	vv();
	cout << v1 << endl;
	v1 = 20;
	vv();
	cout << v1 << endl;
	system("pause");
}