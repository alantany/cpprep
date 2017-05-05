#include<iostream>
#include<string>
using namespace std;
int main() {
	string s1 = "1234567890";
	string s2 = "ab233d3232 ddsad231 dsf032sddfds";
	string::size_type loc = 0;
	int i=0;
	while ((loc = s2.find_first_not_of(s1, loc)) != string::npos) {
		loc++;
		i++;
	}
	cout << "s2中一共有 "<<i<<" 个字母!"<< endl;

	system("pause");
}