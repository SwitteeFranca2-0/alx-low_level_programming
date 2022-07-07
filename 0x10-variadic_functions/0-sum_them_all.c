#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sum them all.
 * @n: variale.
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i;
	unsigned int m;

	m = 0;
	va_start (args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		m += va_arg (args, int);
	va_end(args);
	return (m);
}
	


