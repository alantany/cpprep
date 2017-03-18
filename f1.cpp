#include<iostream>
int f(void);
int main()
{
	int j = 0;
	while (j != 10)
	{
		std::cout << f()<<std::endl;
		j++;
	}


	system("pause");

}

int f(void)
{
	static int i = 0;
	return i++;
}
