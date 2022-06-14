#include "main.h"

/**
 * puts2- put
 * @str: str.
 * Return: none.
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i += 2
	}
	_putchar('\n');
}
