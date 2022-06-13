#include "main.h"

/**
 * _puts - puts
 * @str: parameter.
 * Return: no return value.
 */

void _puts(char *str)
{
	int i;

	for (i = 0;; i++)
	{
		if (str[i] == '\0')
			break;
		_putchar(str[i]);
	}
	_putchar('\n');
}
