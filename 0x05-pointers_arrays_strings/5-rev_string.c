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
	for (i = 0;; i++)
	{
		if (s[i] == '\0')
			break;
	}
	for (p = i; p >= 0; p--)
		x++;
	for (o = 0; o < i; o++)
	{
		m = s[o];
		x[o] = m;

	}
	
	



		


}


