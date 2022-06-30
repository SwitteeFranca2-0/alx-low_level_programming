#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - calloc.
 * @nmemb: nmemb.
 * @size: size.
 * Return: none.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int m, t;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t = nmemb * size;
	p = malloc(t);
	if (p == NULL)
		return (NULL);

	m = 0;
	while (m < t)
	{
		p[m] = 0;
		m++;
	}

	return (p);

