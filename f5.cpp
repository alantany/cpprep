#include<string>
#include<cctype>
int f5(const std::string &s)
{
	for (auto c:s)
	{
		if (isupper(c))
		{
			return 1;
		}

	}
	return 0;
}

