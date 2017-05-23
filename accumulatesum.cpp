#include<numeric>
#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> vi = { 1,2,3,4,5,6,7,9,10 };
	cout << accumulate(vi.begin(), vi.end(), 0) << endl;

	system("pause");
}