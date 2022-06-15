#include "main.h"

/**
 * _strncat - string cat.
 * @dest: arg
 * @src: arg
 * @n: arg
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int k, o;

	k = 0;
	o = 0;

	while (*(src + k) != '\0' && n > 0)
	{
		o++;
		if (!(*(dest + o)) && *(dest + o) != '0')
		{
			*(dest + o) = *(src + k);
			k++;
			n--;
		}
	}
	return (dest);
}
