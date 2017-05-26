#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	vector<int> vi = { 3,4,32,1,4,6,7,23,5,7,9 };
	sort(vi.begin(), vi.end());
	for (vector<int>::iterator loc = vi.begin(); loc != vi.end(); loc++)
		cout << *loc << " ";
	cout << endl;
	auto uni=unique(vi.begin(), vi.end());
	for (vector<int>::size_type loc =0; loc<vi.size(); loc++)
		cout << vi[loc] << " ";
	cout << endl;
	vi.erase(uni, vi.end());
	cout << endl;
	for (vector<int>::size_type loc = 0; loc<vi.size(); loc++)
		cout << vi[loc] << " ";
	reverse(vi.begin(), vi.end());
	cout << endl;
	for (vector<int>::size_type loc = 0; loc<vi.size(); loc++)
		cout << vi[loc] << " ";
	
	system("pause");
}