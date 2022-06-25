#include "main.h"

/**
 * _strcmp - string compare;
 * @s1: arg
 * @s2: arg
 * Return: o, 1, -1.
 */
int _strcmp(char *s1, char *s2)
{
	int i, k, m, j, p;

	p = 0;
	k = 0;
	m = 0;
	j = 0;
	while (s1[m] != '\0')
		m++;
	while (s2[j] != '\0')
		j++;
	if (j >= m)
	{
		i = m;
	}
	else
	{
		i = j;
	}
	while (p < i)
	{
		if (s1[p] != s2[p])
		{
			k = s1[p] - s2[p];
			break;
		}
		p++;
	}
	return (k);
}

