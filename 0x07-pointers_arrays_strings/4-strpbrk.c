#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - string break.
 * @s: aug.
 * @accept: arg
 * Return: s.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int b;

	i = 0;
	while (s[i])
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[i] == accept[b])
			{
				s += i;
				return (s);
			}
		}
		i++;
	}
	return ('\0');
}

