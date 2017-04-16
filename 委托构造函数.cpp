#include"d:\cpp\gitrep\委托构造函数.h"
using namespace std;
myclass::myclass() { cout << "默认构造函数!" << endl; };
myclass::myclass(int x) :myclass() { cout << "int构造函数!" << endl; };
myclass::myclass(string s) :myclass() { cout << "string构造函数!" << endl; };