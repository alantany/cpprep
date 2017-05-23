#include<numeric>
#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<double> vd = { 0,2,2.2,3.4,20.1 };
	cout << accumulate(vd.begin(), vd.end(), 0.0) << endl;

	system("pause");
}