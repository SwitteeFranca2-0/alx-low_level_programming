#include "main.h"

/**
 * _strchr - strchr.
 * @s: arg.
 * @c: arg
 * Return: numm or s.
 */

char *_strchr(char *s, char c)
{
	int i, n;

	i = 0;

	while (s[i])
		i++;

	for (n = 0; n <= i, n++)
	{
		if (s[n] == c)
		{
			s += n;
			return (s);
		}
	}

	return ('\0');
}
