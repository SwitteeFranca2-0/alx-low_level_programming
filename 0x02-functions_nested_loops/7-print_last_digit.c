#include "main.h"

/**
 * print_last_digit - pints last digits..
 * @n: variable.
 * Return: returns the value, n.
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = n * -1;
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
}
