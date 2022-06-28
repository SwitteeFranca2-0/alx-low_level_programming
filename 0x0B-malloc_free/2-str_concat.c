#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - string concat.
 * @s1: s1.
 * @s2: s2.
 * Return: s1.
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int m, n, i, k, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	n = 0;
	while (s1[n])
		n++;

	m = 0;
	while (s2[m])
		m++;

	i = m + n;
	p = malloc((sizeof(char) * i) + 1);

	if (p == NULL)
		return (NULL);
	k = 0;
	b = 0;
	while (k < i)
	{
		if (k <= n)
			p[k] = s1[k];
		if (k >= n)
		{
			p[k] = s2[b];
			b++;
		}
		k++;
	}
	p[k] = '\0';
	return (p);
}
