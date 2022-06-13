#include "main.h"

/**
 * print_rev - prints rev.
 * @s: parameter.
 * Return: no return.
 */

void print_rev(char *s)
{
	int i, n;

	for (i = 0;; i++)
	{
		if (s[i] == '\0')
			break;
	}

	for (n = i; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
