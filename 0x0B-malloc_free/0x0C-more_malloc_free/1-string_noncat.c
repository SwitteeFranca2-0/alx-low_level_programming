#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", concat);
	return (0);
}

/**
 * string_nconcat - string concat.
 * @s1: s1
 * @s2: s2
 * @n: n.
 * Return: value.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

