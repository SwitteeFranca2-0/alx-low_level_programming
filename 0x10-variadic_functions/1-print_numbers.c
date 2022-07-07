#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - print number.
 * @separator: separator.
 * @n: n.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (i < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
