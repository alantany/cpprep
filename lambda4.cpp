#include<string>
#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;
int change(char &);
int main() {
	//cout << char('A'+32) << endl;
	string s = "alAntAnY";
	for_each(s.begin(), s.end(), [](char &c) {if (isupper(c)) c = c + 32; else c = c - 32; return c; });
	for_each(s.begin(), s.end(), change);
	cout << s << endl;

	system("pause");
}
int change(char &c) {
	c=(isupper(c) == 1) ? (c + 32) :(c - 32);
	return c;
};