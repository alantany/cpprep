#include<iostream>
using namespace std;
int main() {
	auto sum = [](int x, int y) {return x + y; };
	cout << sum(1, 1)<<endl;

	system("pause");
}