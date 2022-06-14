#include "main.h"

/**
 * puts2- put
 * @str: str.
 * Return: none.
 */
void puts2(char *str)
{
	int i, m;

	i = 0;
	while (str[i] != '\0')
		i++;
	for (m = 0; m < i; m += 2)
		if (m % 2 == 0)
		{
			_putchar(str[m])
		}
	_putchar('\n');
}
