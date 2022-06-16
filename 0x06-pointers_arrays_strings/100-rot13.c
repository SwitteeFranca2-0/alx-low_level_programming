#include "main.h"

/**
 * rot13 - rot 13.
 * @c: var.
 * Return: c
 */
char *rot13(char *c)
{
	int i;

	i = 0;
	while (c[i])
	{
		while ((c[i] >= 65 && c[i] <= 90) || (c[i] >= 97 && c[i] <= 122))
		{
			if ((c[i] > 77  && c[i] <= 90) || (c[i] > 109 && c[i] <= 122))
			{
				c[i] = c[i] - 13;
				break;
			}
			c[i] = c[i] + 13;
			break;
		}
		i++;
	}
	return (c);
}
