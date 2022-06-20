#include "main.h"

/**
 * _strchr - strchr.
 * @s: arg.
 * @c: arg
 * Return: numm or s.
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
		i++;
	}
	return ('\0');
}
