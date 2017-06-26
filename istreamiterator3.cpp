#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main() {
	istream_iterator<int> it(cin),eof;
	vector<int> vi(it,eof);
	sort(vi.begin(), vi.end());
	ostream_iterator<int> oi(cout, " ");
	unique_copy(vi.begin(), vi.end(), oi);
	cout << endl;
	
	system("pause");
}