#include "main.h"

/**
 * puts2- put
 * @str: str.
 * Return: none.
 */
void puts2(char *str)
{
	int i;

	for (i = 0;; i += 2)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		if (str[i] == '\0')
			break;
	}
	_putchar('\n');
}
