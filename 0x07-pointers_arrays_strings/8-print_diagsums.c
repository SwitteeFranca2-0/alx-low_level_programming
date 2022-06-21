#include <stdio.h>
#include "main.h"


/**
 * print_diagsums - print
 * @a: a
 * @size: size
 * Return: none.
 */

void print_diagsums(int *a, int size)
{
	int b, n, sum, sec_sum;

	sum = 0;
	sec_sum = 0;

	for (b = 0; b < size; b++)
	{
		for (n = 0; n < size; n++)
		{
			if (b == n)
				sum += *(a + (b * size + n));
		}
		sec_sum += *(a + (b * size + (size - 1 - b)));
	}

	printf("%d, %d\n", sum, sec_sum);
}

