#include "main.h"

/**
 * _print_rev_recursion - print rev.
 * @s: arg.
 * Return: none.
 */

void _print_rev_recursion(char *s)
{
	int i;

	if (s[0] == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	putchar(s[0]);
}
