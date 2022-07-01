#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - array.
 * @min: min.
 * @max: max.
 * Return: none.
 */

int *array_range(int min, int max)
{
	int *p;
	int m, n, t;

	if (min > max)
		return (NULL);

	n = max - min;
	p = malloc(sizeof(int) * n + sizeof(int));

	if (p == NULL)
		return (NULL);

	t = min;
	m = 0;
	while (t <= max)
	{
		p[m] = t;
		m++;
		t++;
	}

	return (p);
}
