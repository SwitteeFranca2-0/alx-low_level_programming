#include "main.h"

/**
 * _strspn - strspn.
 * @s: arg.
 * @accept: arg.
 * Return: int.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, b, m;

	i = 0;
	m = 0;

	while (s[i] != 32)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[i] == accept[b])
				m++;
		}
		i++;
	}
	return (m);
}
