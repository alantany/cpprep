#include<iostream>
#include<string>
using namespace std;
int main() {
	string s = "my name is alan!";
	cout << s.substr(3,4) << endl;
	//s.erase(s.size() - 3, 3);
	cout << s << endl;
	s.insert(s.size(), 3, '!');
	cout << s << endl;
	cout << s.append("!@#$") << endl;
	cout << s.replace(11, 4, "peter")<<endl;
	//cout << s.assign("good!") << endl;
	cout << s.erase(1, 11) << endl;



	system("pause");
}