#include<iostream>
using namespace std;
int main() {
	int x = 20;
	auto sum = [x](int y) {return x + y; };
	cout << sum(10) << endl;

	system("pause");
}