#include "main.h"

int is_pal(char *s, int i);
int is_pals(char *s, int i, int m);


/**
 * is_palindrome - is or not?
 * @s: string.
 * Return: 1 or 0.
 */
int is_palindrome(char *s)
{
	return (is_pal(s, 0));
}

/**
 * is_pal - is.
 * @s: s.
 * @i: i
 * Return: int.
 */
int is_pal(char *s, int i)
{
	if (s[i] == '\0')
	{
		i = i - 1;
		return (is_pals(s, i, 0));
	}
	i++;
	return (is_pal(s, i));
}

/**
 * is_pals - is.
 * @s: s.
 * @i: i.
 * @m: m.
 * Return: ion.
 */
int is_pals(char *s, int i, int m)
{
	if (m > i / 2)
		return (0);
	if (s[m] == s[i] && (m == i / 2))
		return (1);
	return (is_pals(s, i - 1, m + 1));
}

