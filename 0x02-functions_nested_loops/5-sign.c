#include "main.h"

/**
 * print_sign - identify the sign of the character.
 * @n: variable.
 * Return: Value 1, 0, or -1 depending on th econditions.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
