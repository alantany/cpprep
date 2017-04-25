#include<iostream>
using namespace std;
int main()
{
	int i ;
	int j = 0;
	while (cin >> i&&j<1) {
		cout << i << endl;
		cout << "badbit is:" << cin.badbit << endl;
		cout << "fail() is:" << cin.fail() << endl;
		cout << "good() is:" << cin.good() << endl;
		cout << "oef is:" << cin.eof() << endl;
		cout << "bad() is:" << cin.bad() << endl;
		cin.clear();
		cout << "status is cleared!" << endl;
		cout << "badbit is:" << cin.badbit << endl;
		cout << "fail() is:" << cin.fail() << endl;
		cout << "good() is:" << cin.good() << endl;
		cout << "oef is:" << cin.eof() << endl;
		cout << "bad() is:" << cin.bad() << endl;
		j++;
	}
	cout << "read broken!" << endl;
	cout << "badbit is:" << cin.badbit << endl;
	cout << "fail() is:" << cin.fail() << endl;
	cout << "good() is:" << cin.good() << endl;
	cout << "oef is:" << cin.eof() << endl;
	cout << "bad() is:" << cin.bad() << endl;
	cin.clear();
	cout << "status is cleared!" << endl;
	cout << "badbit is:" << cin.badbit << endl;
	cout << "fail() is:" << cin.fail() << endl;
	cout << "good() is:" << cin.good() << endl;
	cout << "oef is:" << cin.eof() << endl;
	cout << "bad() is:" << cin.bad() << endl;

	system("pause");
}