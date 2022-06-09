#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: parameter
 * Return: no return value
 */
void print_diagonal(int n)
{
	int m;
	int o;

	m = 1;
	if (n <= 0)
		_putchar('\n');
	while (m <= n)
	{
		for (o = 1; o < m; o++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		m++;
	}
}
