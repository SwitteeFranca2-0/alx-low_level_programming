#include "main.h"
#include <stdio.h>

int main(void)
{
	char s[10] = "My school";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}

/**
 * rev_string - reverse string.
 * @s: argument
 * Return: none.
 */

void rev_string(char *s)
{
	int i, p, o;
	char *x, m;

	x = s;
	i = 0;
	while (s[i] != '\0')
		i++;
	for (p = 1; p < i; p++)
		x++;
	for (o = 0; o < i / 2; o++)
	{
		m = s[o];
		s[o] = *x;
		*x = m;
		x--;
	}
}


