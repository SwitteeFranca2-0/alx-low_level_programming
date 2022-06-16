#include "main.h"

/**
 * print_number - print numbee.
 * @n: arg.
 * Return: none.
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	num = n
	num = num / 10;

	if (num != 0)
		print_number(num);
	_putchar(n % 10 + '0');
}

