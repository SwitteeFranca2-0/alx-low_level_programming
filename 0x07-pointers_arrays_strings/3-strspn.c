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

	while ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90) && s[i])
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
