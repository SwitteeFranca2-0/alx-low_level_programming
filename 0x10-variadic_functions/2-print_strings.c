#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_strings - print strings.
 * @separator: separator.
 * @n: numbers.
 * Return: none.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *m;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		m = va_arg(args, char *);
		printf("%s", (m ? m : "(nil)"));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
