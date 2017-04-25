#include<iostream>
#include<fstream>
#include<String>
using namespace std;
int main() {
	string file = "d:\\javafile\\io2.cpp";
	ifstream in;
	in.open(file);
	if (in)
		cout << "file opened successfully! " <<in.fail()<< endl;
	else
		cout << "file open failed!"<<in.good()<<endl;

	system("pause");
}
