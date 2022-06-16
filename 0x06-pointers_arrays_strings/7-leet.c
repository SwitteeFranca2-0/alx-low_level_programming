#include "main.h"

/**
 * leet - leet.
 * @c: arg.
 * Return: c.
 */

char *leet(char *c)
{
	int i, n, len;

	len = 5;
	char a[5] = { 'A', 'E', 'O', 'T', 'L'};
	char b[5] = {'a', 'e', 'o', 't', 'l'};
	char d[5] = {'4', '3', '0', '7', '1'};

	i = 0;
	n = 0;
	while (c[i])
	{
		n = 0;
		while (n < len)
		{
			if (c[i] == a[n] || c[i] == b[n])
			{
				c[i] = d[n];
			}
			n++;
		}
		i++;
	}

	return (c);
}
