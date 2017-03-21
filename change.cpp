#include<cctype>
void change(char(&p)[20], size_t size)
{
	for (int i = 0; i != size; i++)
	{
		if (isalpha(p[i]))
		{
			if (isupper(p[i]))
				p[i] = tolower(p[i]);
			else
			{
				p[i] = toupper(p[i]);
			}
		}
		else
		{
			break;
		}

	}
}