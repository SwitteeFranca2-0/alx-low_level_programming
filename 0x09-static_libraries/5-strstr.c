#include "main.h"

/**
 * _strstr - string
 * @haystack: hay
 * @needle: need
 * Return: choice.
 */
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


