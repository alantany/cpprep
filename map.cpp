#include<map>
#include<iostream>
#include<string>
using namespace std;
int main() {
	map<string, size_t> word_count;
	string word;
	while (cin >> word)
		++word_count[word];
	cout << word_count.size() << endl;
	for (auto w : word_count)
		cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times " : " time ") << endl;

	system("pause");


}