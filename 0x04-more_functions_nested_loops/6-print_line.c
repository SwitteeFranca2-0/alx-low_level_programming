#include "main.h"

/**
 * print_line - atisfy a gven.
 * @n: parameter.
 * Return: no return value..
 */
void print_line(int n)
{
	while (n > 0)
	{
		putchar('_');
		n--;
	}
	_putchar('\n');
}
