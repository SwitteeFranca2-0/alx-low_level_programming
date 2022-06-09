#include "main.h"

/**
 * print_most_numbers - print most numbers.
 * Return: no return value.
 */

void print_most_numbers(void)
{
	int m;

	for (m = 0; m < 10; m++)
	{
		if (m == 2 || m == 4)
			continue;
		_putchar(m + '0');
	}
	_putchar('\n');
}


