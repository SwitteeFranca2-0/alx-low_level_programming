#include "main.h"
#include <stdio.h>

int is_pal(char *s, int i);
int is_pals(char *s, int i, int m);

int main(void)
{
	int r;

	r = is_palindrome("step on no pets");
	printf("%d\n", r);
	return (0);
}

/**
 * is_palindrome - is or not?
 * @s: string.
 * Return: 1 or 0.
 */
int is_palindrome(char *s)
{
	return (is_pal(s, 0));
}

int is_pal(char *s, int i)
{
	if (s[i] == '\0')
	{
		i = i - 1;
		return (is_pals(s, i, 0));
	}
	return (is_pal(s, i + 1));
}

int is_pals(char *s, int i, int m)
{
	if (m > i / 2)
		return (0);
	if (s[m] == s[i] && (m == i / 2))
		return (1);
	return (is_pals(s, i - 1, m + 1));
}

