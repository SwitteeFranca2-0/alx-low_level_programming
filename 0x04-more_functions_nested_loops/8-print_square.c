#include "main.h"

/**
 * print_square - print square
 * @size: parameter
 * Return: no return value.
 */
void print_square(int size)
{
	int m;
	int n;

	n = size;
	if (n == 0)
		_putchar('\n');

	while (size > 0)
	{
		for (m = 1; m <= n; m++)
			_putchar('#');
		size--;
		_putchar('\n');
	}
}
