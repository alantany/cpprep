#include<iostream>
#include<string>
using namespace std;
int main() {
	string s = "alan hello alan nice!";
	string::size_type  pos = 0;
	int i = 0;
	while ((pos = s.find("alan",pos)) != string::npos)
	{
	pos++;
	i++;
	}
	cout << "���ҵ� "<<i<<" �������" << endl;

	system("pause");
}