#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
	double  i ,j;
	cout << "������2����:";
	while(cin>>i>>j)
	try
	{
		if (j == 0)
			throw runtime_error("��������Ϊ0������������");
		cout<<(i / j)<<endl;
	}
	catch (runtime_error err)
	{
		cout << err.what()<<endl;

	}

	//cout << i + j << endl;
	system("pause");
}