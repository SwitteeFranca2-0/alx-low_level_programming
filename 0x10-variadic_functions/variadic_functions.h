#ifndef _HEADER_
#define _HEADER_
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct funcs
{
	char *type;
	void (*f)(char *separator, va_list args);
} func;
#endif
