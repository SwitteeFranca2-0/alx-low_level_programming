#include "main.h"

/**
 * puts_half - puts half.
 * @str: string
 * Return: none.
 */
void puts_half(char *str)
{
	int i, m;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i % 2 == 1)
	{
		for (m = (i + 1) / 2; m < i; m++)
			_putchar(str[m]);
	}
	else
	{
		for (m = i / 2; m < i; m++)
			_putchar(str[m]);
	}
	_putchar('\n');
}
