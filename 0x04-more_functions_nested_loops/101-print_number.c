#include "main.h"

/**
 * print_number- print number
 * @n: parameter;
 * Return: no return value.
 */
void print_number(int n)
{
	unsigned int num;

	num = n;
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	num /= 10;
	if (num != 0)
		print_number(num);
	_putchar(n % 10 + '0');
}

