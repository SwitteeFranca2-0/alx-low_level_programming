#include "main.h"

/**
 * is_palindrome - is or not?
 * @s: string.
 * Return: 1 or 0.
 */
int is_palindrome(char *s)
{
	int i, m;

	i = 0;
	m = 0;

	while (s[i])
		i++;
	i = i - 1;
	while (m <= i / 2)
	{
		if (s[m] != s[i])
			return (0);
		m++;
		i--;
	}

	return (1);
}

