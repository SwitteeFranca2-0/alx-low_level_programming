#include "variadic_functions.h"

/**
 * sum_them_all - sum them all.
 * @n: variale.
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, m;

	m = 0;
	if (n != 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
			m += va_arg(args, int);
		va_end(args);
		return (m);
	}
	return (0);
}
