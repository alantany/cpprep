#include<iostream>
#include<map>
#include<string>
#include<fstream>
#include<vector>
#include<algorithm>

using namespace std;
typedef pair<string, int> PAIR;
bool cmp_by_value(PAIR &v1, PAIR &v2) {
	return v1.second > v2.second;
}
int main() {
	ifstream in("D:\\cpp\\gitrep\\A servant of Satan.txt");
	if (!in.is_open())
		cout << "file open failed!" << endl;
	else
		cout << "file opened successfully!" << endl;
	map<string ,size_t> word_ct;
	string word;
	while (!in.eof()) {
		in >> word;
		word_ct[word]++;
	}
	vector<PAIR> vp(word_ct.cbegin(),word_ct.cend());
	sort(vp.begin(), vp.end(), cmp_by_value);
	for (int i = 0; i < 100; i++)
		cout << vp[i].first<<" ocurs "<<vp[i].second<<" times!" << endl;
	


	system("pause");
}
