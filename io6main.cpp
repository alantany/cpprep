#include<iostream>
#include<sstream>
#include"d:\cpp\gitrep\io6.h"
#include<fstream>
using namespace std;
int main()
{
	vector<peopleinfo> people;
	string s, word;
	
	while (getline(cin, s)) {
		istringstream record(s);
		peopleinfo p;
		record >> p.name;
		while (record >> word) {
			p.phone.push_back(word);
		}
		people.push_back(p);

	}
	ofstream out("d:\\cpp\\io6.txt", ios::app);
	for (int i = 0; i < people.size(); i++) {
		string cell;
		out << people[i].name <<" ";
		for (int j = 0; j < people[i].phone.size(); j++)
			cell += people[i].phone[j]+" ";		
		out << cell << endl;
		//cout << people[i].name << " " << cell << endl;
	}

	system("pause");
}