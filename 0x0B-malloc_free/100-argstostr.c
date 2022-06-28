#include "main.h"

/**
 * argstostr - to string.
 * @ac: ac.
 * @av: av.
 * Return: char.
 */
char *argstostr(int ac, char **av)
{
	int i, m, k, b, n, r, t;
	char *e;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		e = av[i];
		m = 0;
		while (e[m])
			m++;
		k += m;
	}

	p = malloc(sizeof(char *) * (k + ac));

	b = 0;
	for (n = 1; n < ac; n++)
	{
		e = av[n];
		for (m = 0; e[m] != '\0'; m++)
		{
			p[b] = e[m];
			b++;
		}
		p[b] = '\n';
		b++;
	}

	p[b] = '\0';

	return (p);
}
