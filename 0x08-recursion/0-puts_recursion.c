#include "main.h"

/**
 * _puts_recursion - puts recursion.
 * @s: arg.
 * Return: arg.
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[0] != '\0')
	{
		putchar(s[0]);
		s = s + 1;
		_puts_recursion(s);
	}
	if (s[0] == '\0')
	{
		putchar('\n');
		return;
	}
}
