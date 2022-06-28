#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - string duplicate.
 * @str: string.
 * Return: string.
 */
char *_strdup(char *str)
{
	int i, m;
	char *p;

	m = 0;

	if (str == NULL)
		return (NULL);

	while (str[m])
		m++;

	p = malloc((sizeof(char) * m) + 1);

	if (p == NULL)
		return (NULL);

	i = 0;
	while (i < m)
	{
		p[i] = str[i];
		i++;
	}

	p[i] = '\0';

	return (p);
}
