#include "main.h"

/**
 * _strncpy - stiing copy.
 * @dest: arg
 * @src: arg
 * @n: arg
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, k;

	i = 0;
	while (*(src + i) && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	for (; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}



