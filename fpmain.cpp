#include<iostream>
#include<vector>
#include"d:\cpp\gitrep\fp.h"
using namespace std;
int main()
{
	vector<PF> vfp;
	int x = 100, y = 30;
	PF pp = fpplus;
	PF pmi = fpminus;
	PF pmu = fpmult;
	PF pd = fpdiv;
	vfp.push_back(pp);
	vfp.push_back(pmi);
	vfp.push_back(pmu);
	vfp.push_back(pd);
	for (auto c = vfp.begin(); c != vfp.end(); c++)
	{
		cout << (*c)(x,y) << endl;
	}

	system("pause");
}
