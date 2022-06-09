#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print diagonal
 * @n: parameter
 * Return: no return value
 */
void print_diagonal(int n)
{
	int m;
	int o;

	if (n > 0)
	{
		for (m = 1; m <= n; m++)
		{
			for (o = 1; o < m; o++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
