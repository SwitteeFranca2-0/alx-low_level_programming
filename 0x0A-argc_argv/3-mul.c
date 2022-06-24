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
	unsigned int i, m, mul = 1;

	if (argc < 3)
	{
		printf("Error");
		return (1);
	}
	m = atoi(argv[1]);
	i = atoi(argv[2]);
	mul = i * m;
	printf("%d", mul);
	printf("\n");
	return (0);
}


