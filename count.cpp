#include<algorithm>
#include<vector>
#include<iostream>
#include<string>
#include<list>
#include<deque>
using namespace std;
int main() {
	deque<int> vi = { 2,3,1,2,4,5,2,6 };
	list<string> vs = { "alan","tom","alan","tom","alan" };
	int n = 1;
	cout<<*find(vi.begin(), vi.end(), n)<<endl;
	string s="tom";
	cout << count(vs.begin(), vs.end(), s)<<endl;
	system("pause");
}