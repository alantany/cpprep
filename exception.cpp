#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
	double  i ,j;
	cout << "请输入2个数:";
	while(cin>>i>>j)
	try
	{
		if (j == 0)
			throw runtime_error("除数不能为0，请重新输入");
		cout<<(i / j)<<endl;
	}
	catch (runtime_error err)
	{
		cout << err.what()<<endl;

	}

	//cout << i + j << endl;
	system("pause");
}