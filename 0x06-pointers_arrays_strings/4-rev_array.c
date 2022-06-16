#include "main.h"

/**
 * reverse_array - reverse.
 * @a: a
 * @n: n
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int m, i;

	for (m = 0; m < n / 2; m++)
	{
		i = a[m];
		a[m] = a[n - 1 - m];
		a[n - 1 - m] = i;
	}
}
