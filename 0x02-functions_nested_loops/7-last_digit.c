#include "main.h"

/**
 * main - prints the last function.
 * Return: Always 0.
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	putchar(r + '0');
	putchar('\n');
	return (0);
}

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
		putchar(n + '0');
		return (n);
	}
	else
	{
		n = n * -1;
		n = n % 10;
		putchar(n + '0');
		return (n);
	}
}
