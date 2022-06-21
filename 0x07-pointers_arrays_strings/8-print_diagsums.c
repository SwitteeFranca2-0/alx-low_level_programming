#include "main.h"

/**
 * print_diagsum - print
 * @a: a
 * @size: size
 * Return: none.
 */

void print_diagsum(int *a, int size)
{
	int b, n, sum, sec_sum;

	sum = 0;
	sec_sum = 0;

	for (b = 0; b < size; b++)
	{
		for (n = 0; n < size; n++)
		{
			if (b == n)
			{
				sum += (*(a + b) + n);
			}
			if ((b + n) == (size - 1))
			{
				sec_sum += (*(a + b) + n);
			}
		}
	}

	printf("%d, %d\n", sum, sec_sum);
}

