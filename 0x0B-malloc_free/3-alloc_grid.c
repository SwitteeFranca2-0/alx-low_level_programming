#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allcate grid.
 * @width: width.
 * @height: height.
 * Return: return.
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, k, n, m;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * (height - 1));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int *) * (width - 1));
		if (p[i] == NULL)
		{
			for (n = i; n >= 0; n--)
				free(p[n]);
			free(p);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (k = 0; k <  width; k++)
			p[m][k] = 0;
	}

	return (p);
}
