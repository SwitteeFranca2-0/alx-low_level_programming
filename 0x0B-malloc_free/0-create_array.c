#include "main.h"

/**
 * create_array - create array.
 * @size: size.
 * @c: c
 * Return: array.
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}

