#include "main.h"
#include <stdio.h>

int main(void)
{
	char str[] = "Expect-the>best. 123repare-for the worst. apitalize on what comes. \n hello world.";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}

char *cap_string(char *c)
{
	int i, a, m, n;

	i = 0;
	m = 0;
	n = 0;
	if ( c[i] >= 97 && c[i] < 123)
	{
		a = c[i] - 97;
		c[i] = 65 + a;
		i++;
	}
	while (c[i])
	{
		if (c[i] == 58 || c[i] == 59 || c[i] == 124 || c[i] == 123)
		{
			m = 1;	
		}
		else if (c[i] == 9 || (c[i] >= 32 && c[i] <= 47))
		{
			m = 1;
		}
		else if (m == 1 && c[i] >= 97 && c[i] < 123)
		{
			a = c[i] - 97;
			c[i] = 65 + a;
			m = 0;
		}
		else
		{
			m = 0;
		}
		i++;
	}
}




