#include "main.h"

/**
 * _strchr - strchr.
 * @s: arg.
 * @c: arg
 * Return: numm or s.
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
