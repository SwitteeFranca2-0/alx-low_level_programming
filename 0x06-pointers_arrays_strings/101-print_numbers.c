#include "main.h"

/**
 * print_number - print numbee.
 * @n: arg.
 * Return: none.
 */
void print_number(int n)
{
	int num;

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	num = n;
	num = num / 10;

	if (num != 0)
		print_number(num);
	putchar(n % 10 + '0');
}

