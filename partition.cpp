#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
//bool bigger_5( string &,int );
int main() {
	vector<string>::size_type len;
	cout << "please input string length:";
	cin>> len;
	vector<string> vs = { "alantany", "alan", "miketany", "mike", "tracy", "thomas" };
	for (vector<string>::iterator sz = vs.begin(); sz != vs.end(); sz++)
		cout << *sz << " ";
	cout << endl;
	auto loc = partition(vs.begin(), vs.end(), [len](string &s) {return s.size() > len; });
	auto beg = vs.begin();
	for (; beg != vs.end(); beg++)
		cout << *beg << " ";
	cout << endl;
	cout << *loc << endl;
	beg = vs.begin();
	for (; beg != loc; beg++)
		cout << *beg << " ";
	cout << endl;
	for (loc = vs.begin(); loc != vs.end(); loc++)
	{
		if(size(*loc)>len)
		cout << *loc << " ";	
	}
	cout << endl;

	system("pause");

}
/*
bool bigger_5( string &s) {
	return s.size()>5;
		
}*/