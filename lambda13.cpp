#include<iostream>
#include<string>
#include<vector>
#include<functional>
#include<algorithm>

using namespace std;
//using std::placeholders::_1;
using namespace std::placeholders;
bool shorter(const string &, vector<string>::size_type);

int main() {
	vector<string> vs = { "ab","cdef","dge","bvddsd" };
	vector<string>::size_type sz = 2;
	for (auto loc = vs.begin(); loc != vs.end(); ++loc)
		cout << *loc << " ";
	cout << endl;
	auto loc=find_if(vs.begin(), vs.end(), bind(shorter, _1, sz));
	cout << *loc << endl;
	system("pause");

}
bool shorter(const string &s1, vector<string>::size_type sz) {

	return s1.size() >sz;
}