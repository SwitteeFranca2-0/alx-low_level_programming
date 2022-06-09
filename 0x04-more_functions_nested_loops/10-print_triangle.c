#include "main.h"

/**
 * print_triangle - print triangle.
 * @size: parameter.
 * Return: no return value.
 */
void print_triangle(int size)
{
	int m;
	int n;
	int o;

	n = 1;
	o = 1;
	if (size <= 0)
		_putchar('\n');
	while (size > 0)
	{
		for (m = 1; m < size; m++)
			_putchar(' ');
		for (o = n; o > 0; o--)
			_putchar('#');
		_putchar('\n');
		size--;
		n++;
	}
}

