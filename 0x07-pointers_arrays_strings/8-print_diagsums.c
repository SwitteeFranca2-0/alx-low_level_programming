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
	int b, sum, sec_sum;

	sum = 0;
	sec_sum = 0;

	for (b = 0; b < size; b++)
	{
		sum += *(*(a + b) + b);
		sec_sum += *(*(a + b) + (size - 1 - b));
	}

	printf("%d, %d\n", sum, sec_sum);
}

