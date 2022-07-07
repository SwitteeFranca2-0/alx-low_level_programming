#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

void print_char(char *separator, va_list args);
void print_integer(char *separator, va_list args);
void print_float(char *separator, va_list args);
void print_string(char *separator, va_list args);

/**
 * print_all - print all.
 * @format: format.
 * Return: none.
 */
void print_all(const char * const format, ...)
{
	unsigned int j;
	int i;
	char *separator = "";
	func functions[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string}
	};
	va_list args;

	va_start(args, format);
	j = 0;
	while (format && format[j])
	{
		i = 0;
		while (i < 4)
		{
			if (format[j] == *functions[i].type)
			{
				functions[i].f(separator, args);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(args);
	printf("\n");
}

/**
 * print_char - print char.
 * @separator: separator.
 * @args: arg.
 * Return: none.
 */
void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_integer - print integer.
 * @separator: separator.
 * @args: arg.
 * Return: none.
 */
void print_integer(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * print_float - print float.
 * @separator: separator.
 * @args: arg.
 * Return: none.
 */
void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_string - print string.
 * @separator: separator.
 * @args: arg.
 * Return: none.
 */
void print_string(char *separator, va_list args)
{
	char *m;

	m = va_arg(args, char *);
	if (m == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, m);
}
