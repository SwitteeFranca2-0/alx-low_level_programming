#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - argc.
 * @argc: argc.
 * @argv: array.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int n, m;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	if (atoi(argv[1]) >= 25)
	{
		m = 25;
	}
	else if (atoi(argv[1]) == 10)
	{
		m = 10;
	}
	else if (atoi(argv[1]) >= 5 && atoi(argv[1]) < 25)
	{
		m = 5;
	}
	n = atoi(argv[1]) / m;
	if (atoi(argv[1]) % m)
		n = atoi(argv[1]) / m + 1;
	printf("%d\n", n);
	return (0);
}

