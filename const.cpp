#include<iostream>
#include<vector>
using namespace std;
main()
{
	vector<int> vi;
	auto begin=vi.begin();
	int i=0;
	while(begin!=vi.end()&&i<100)
	{
		vi.push_back(i);
		begin++;
		i++;
		cout<<vi[i];
	}

}
