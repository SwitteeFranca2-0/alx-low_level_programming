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
	int i, m;

	i = 0;
	m = 0;
	
	while (haystack[i])
	{
		while (needle[m])
		{
			if (haystack[i + m] != needle[m])
				break;
			m++;
		}
		if (needle[m] == '\0')
			return (haystack + i);
		i++;
	}

	return ('\0');
}


