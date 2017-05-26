#include<iostream>
using namespace std;
int main() {
	int a1[] = { 1,2,3,4,5,6,7,8 };
	cout << sizeof(a1) << " " << sizeof(*a1) << endl;
	int a2[sizeof(a1) / sizeof(*a1)];
	copy(begin(a1), begin(a1)+6, a2);
	for (auto i = 0; i < (sizeof(a2) / sizeof(*a2)); i++)
		cout << a2[i] << " ";

	system("pause");
}