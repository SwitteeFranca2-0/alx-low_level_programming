#include "main.h"

/**
 * _memset - mem set.
 * @s: arg
 * @b: arg
 * @n: arg
 * Return: chr.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	_putchar('\n');

	return (s);
}


