#include "main.h"
#include <stdio.h>

int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem.");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}

/**
 * char _strcpy - strcpy.
 * @dest: dest
 * @src: src
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{	
	int i;
	
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i++] = '\0';
	
	return (dest);

}



