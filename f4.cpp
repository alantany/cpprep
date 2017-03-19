#include<string>
int f4(char ch, int &ct)
{
	std::string s = "a,e,i,o,u,A,E,I,O,U";
	std::string::size_type loc = 0;
	if (s.find(ch, loc) != std::string::npos)
	{
		ct++;
		return 1;
	}
	//else
		//return 0;

}