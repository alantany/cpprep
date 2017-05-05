#include<iostream>
#include<string>
using namespace std;
int main() {
	char *cp = "my name is alan!";
	string s1(cp,3, 2);
	cout << s1 << endl;
	 string s2(cp, 10);
	cout << s2 << endl;
	string s3(s2, 2);
	cout << s3 << endl;





	system("pause");

}