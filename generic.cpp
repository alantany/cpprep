#include<list>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
int main() {
	//vector<string> vs = { "hello","alan" };
	string vs = "hello,alantany";
	string s = "alan";
	//cout << *(vs.end()-1)<< endl;
	cout << equal(vs.begin() + 5, vs.end()-6, s.begin());

	system("pause");

}