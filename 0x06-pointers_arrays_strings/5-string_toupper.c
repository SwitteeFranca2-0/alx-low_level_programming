#include "main.h"

/**
 * string_toupper - to upper.
 * @c: arg
 * Return: string.
 */

char *string_toupper(char *c)
{
	int a, i;

	i = 0;
	while (c[i])
	{
		if (c[i] >= 97 && c[i] < 123)
		{
			a = c[i] - 97;
			c[i] = a + 65;
		}
		i++;
	}
	return (c);
}


