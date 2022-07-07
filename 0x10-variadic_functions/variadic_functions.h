#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct funcs - struct funcs.
 * @type: type.
 * @f: f.
 */
typedef struct funcs
{
	char *type;
	void (*f)(char *separator, va_list args);
} func;
int _putchar(char c);
#endif
