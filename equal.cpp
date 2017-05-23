#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
	vector<string> vs1 = { "alan","tom" };
	vector<string> vs2 = { "tom","alan" };
	vector<const char*> vc1 = { "alan","tom" };
	vector<const char*> vc2 = { "alan","tom","peter" };
	cout << equal(vc1.begin(), vc1.end(), vc2.begin());

	system("pause");
}