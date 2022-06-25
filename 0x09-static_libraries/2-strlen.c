#include "main.h"

/**
 * _strlen - string length.
 * @s: parameter.
 * Return: length.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0;; i++)
	{
		if (s[i] == '\0')
			break;
	}
	return (i);
}
