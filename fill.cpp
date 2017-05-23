#include<vector>
#include<string>
#include<algorithm>
#include<iostream>
#include<iterator>

using namespace std;
int main() {
	vector<string> s(10);
	fill(s.begin(), s.end(), "a");
	for(int i=0;i<10;i++)
		cout << s[i];
	system("pause");
}