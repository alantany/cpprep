#include<iostream>
#include<deque>
#include<iterator>
#include<string>
using namespace std;
int main() {
	deque<string> d;
	deque<string> ds = { "alan", "tom", "mike", "peter" };
	for (auto s : ds)
		d.push_front(s);
	deque<string>::reverse_iterator it;
	for (it=d.rbegin();it!=d.rend();it++)
		cout << *it<< " ";

	system("pause");
}