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

	k = 0;
	i = 0;
	while (*(src + i) && n > 0)
	{
		*(dest + k) = *(src + i);
		i++;
		n--;
		k++;
	}
	return (dest);
}



