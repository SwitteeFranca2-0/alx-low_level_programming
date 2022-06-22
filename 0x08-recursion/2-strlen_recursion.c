#include "main.h"

/**
 * _strlen_recursion - len of string.
 * @s: at s.
 * Return: none.
 */

int _strlen_recursion(char *s)
{
	if (s[0] == 0)
		return (0);
	s++;
	return (1 + strlen_recursion(s));
}
