#include<cctype>
#include<string>
void f6(std::string &s)
{
	int i = 0;
	for (auto c : s)
	{
		s[i] = tolower(s[i]);
		i++;
	}
}