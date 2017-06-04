#include<iostream>
using namespace std;
int main() {
	int n = 10;
	auto f = [&]() {return n++;  };
	f();
	cout << n << endl;
	auto fc = [=]() {return n+1;  };
	fc();
	cout << n << endl;

	system("pause");
}