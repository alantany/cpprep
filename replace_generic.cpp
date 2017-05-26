#include<vector>
#include<string>
#include<iostream>
using namespace std;
int main() {
	vector<string>  ls = { "alan","tom","dsfdsafds" };
	cout << ls.size();
	string s = "joe";
	fill(ls.begin() , ls.end(), "joe");
	cout << *(ls.begin()) << *(ls.begin() + 1) << endl;
	cout << ls.size();
	string ss = "alantany";
	string sss = "tom";
	fill(ss.begin(), ss.end()-4, 'bc');
	cout << ss << endl;

	system("pause");
}