#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - pints last digits..
 * @n: variable.
 * Return: returns the value, n.
 */
int print_last_digit(int n)
{
	int m;
	
	if (n < 0)
	{
		n = n * -1;
	}

	m = n % 10;
	putchar(m + '0');
	return (m);
}
