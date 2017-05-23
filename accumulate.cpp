#include<numeric>
#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main() {
	vector<int> vi ;
	int sum = accumulate(vi.begin(), vi.end(), 0);
	cout << sum << endl;
	vi = { 1,2,3,4,5,6 };
	sum = accumulate(vi.begin(), vi.end(), 0);
	cout << sum << endl;
	vector<string> vs = { "I ","love ","my son!" };
	string about = accumulate(vs.cbegin(), vs.cend(), string(""));
	cout << about << endl;
	system("pause");

}