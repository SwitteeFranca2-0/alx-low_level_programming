#include "main.h"

/**
 * _strcat - string cat
 * @dest: arg.
 * @src: arg;
 * Return: point
 */

char *_strcat(char *dest, char *src)
{
	int i, k;

	k = 0;
	i = 0;
	while (*(src + k) != '\0')
	{
		i++;
		if (!(*(dest + i)) && *(dest + i) != '0')
		{
			*(dest + i) = *(src + k);
			k++;
		}
	}

	return (dest);
}
