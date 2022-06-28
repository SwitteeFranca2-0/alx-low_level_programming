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

	while (str[m])
		m++;

	p = malloc(sizeof(char) * m);

	if (str == NULL || p == NULL)
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
