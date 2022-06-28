#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - to string.
 * @ac: ac.
 * @av: av.
 * Return: char.
 */
char *argstostr(int ac, char **av)
{
	int m, b, n;
	char *e;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	p = malloc(sizeof(char *) * (ac - 1));

	b = 0;
	for (n = 0; n < ac; n++)
	{
		e = av[n];
		for (m = 0; e[m] != '\0'; m++)
		{
			p[b] = e[m];
			b++;
		}
		p[b] = '\n';
		if(n != ac - 1)
			b++;
	}

	p[b] = '\0';

	return (p);
}
