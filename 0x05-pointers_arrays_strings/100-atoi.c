#include "main.h"

/**
 * _atoi - a to integer.
 * @s: argument.
 * Return: inetger.
 */
int _atoi(char *s)
{
	int i, k;
	unsigned int m;

	m = 0;
	i = 1;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] == 45)
			i = i * -1;
		if (s[k] >= 48 && s[k] <= 57)
		{
			m = m * 10 + s[k] - '0';
		}
		if ((!(s[k] >= 48 && s[k] <= 57)) && m > 0)
			break;
	}
	m = m * i;
	return (m);
}

