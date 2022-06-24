#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main.
 * @argc: arg c.
 * @argv: argv.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	unsigned int i, mul = 1;

	if (argc < 3)
		printf("Error");

	for (i = 1; i < argc; i++)
		mul = mul * atoi(argv[i]);

	printf("%d", mul);
	printf("\n");

	return (0);
}


