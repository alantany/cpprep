#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<iostream>
#include<fstream>
#include<set>

using namespace std;
typedef pair<string, size_t> PAIR;
bool sort_by_value(PAIR &v1, PAIR &v2) {
	return v1.second > v2.second;
}
int main() {
	set<string> exclude = { "The","the","But","but","And","and","Or","or","An","an","A","a" };
	ifstream in("d:\\cpp\\gitrep\\A servant of Satan.txt");
	if (in.is_open())
		cout << "file opened successfully!" << endl;
	else
		cout << "file open failed!" << endl;
	string words;
	map < string, size_t> word_cn;
	while (!in.eof()) {
		in >> words;
		if (exclude.find(words) == exclude.end())
			++word_cn[words];
	}
	vector<PAIR> vp(word_cn.begin(), word_cn.end());
	sort(vp.begin(), vp.end(), sort_by_value);
	for (int i = 0; i < 100;i++) {
		cout << vp[i].first << " occurs " << vp[i].second << ((vp[i].second > 1) ? " times" : " time ") << endl;
	}
	
	system("pause");



}