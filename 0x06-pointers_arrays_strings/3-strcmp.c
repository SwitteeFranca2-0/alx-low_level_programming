#include "main.h"
#include <stdio.h>

int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";
	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	return (0);
}

/**
 * _strcmp - string compare;
 * @s1: arg
 * @s2: arg
 * Return: o, 1, -1.
 */
int _strcmp(char *s1, char *s2)
{
	int i, k;

	i = 0;
	k = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			k = k + (s1[i] - s2[i]);
		i++;
	}
	return (k);
}

