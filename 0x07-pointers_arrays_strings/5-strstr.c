#include "main.h"
#include <stdio.h>

int main(void)
{
	char *s = "hello, world!";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);

}


char *_strstr(char *haystack, char *needle)
{
	int i;
	int b;
	int m;

	i = 1;
	b = 1;
	m = 0;
	

	while (haystack[i])
	{
		if (haystack[i] = needle[i])
		{
			b++;
		}
		else
		{
			b--;
		}
		i++;
	}

	if (b == m)
	{
		haystack += 1;
		return (haystack);
	}
	else
	{
		return ('\0');
	}
}


