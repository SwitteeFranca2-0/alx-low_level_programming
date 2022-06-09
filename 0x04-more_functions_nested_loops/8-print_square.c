#include "main.h"

/**
 * print_square - print square
 * @size: parameter
 * Return: no return value.
 */
void print_square(int size)
{
	int m;

	if (size == 0)
		_putchar('\n');

	while (size > 0)
	{
		for (m = 0; m < n; m++)
			_putchar(35);
		size--;
		_putchar('\n');
	}
}
