#include "main.h"

/**
 * print_last_digit - pints last digits..
 * @n: variable.
 * Return: returns the value, n.
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10
	if (n >=  0)
	{
		_putchar(m + '0');
	}
	else
	{
		n = n * -1;
		_putchar(m + '0');
	}
	return (m);
}
