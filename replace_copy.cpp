#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	vector<int> vi = { 1,1,1,1,1,1,1,2,2,2,2,2 };
	vector<int> vi2;
	replace_copy(vi.cbegin(), vi.cend(), back_inserter(vi2), 2, 0);
	vector<int>::iterator loc;
	for (vector<int>::size_type loc=0;loc<vi.size();loc++)
		cout << vi[loc] << " ";
	cout << endl;
	for (loc = vi2.begin(); loc != vi2.end(); loc++)
		cout << *loc << " ";
	cout << endl;
	system("pause");
}