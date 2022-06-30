#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - struing concat,
 * @s1: s1
 * @s2: s2
 * @n: n
 * Return: char
 */
Nchar *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int m, x, r, k, o, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	m = 0;
	while (s1[m])
		m++;
	x = 0;
	while (s2[x])
		x++;

	l = m + n + 1;
	if (n >= x)
		l = m + x + 1;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	k = 0, r = 0, o = 0;
	while (k < l)
	{
		if (k <= m)
		{
			p[k] = s1[r];
			r++;
		}
		if (k >= m)
		{
			p[k] = s2[o];
			o++;
		}
		k++;
	}
	p[k] = '\0';
	return (p);
}
