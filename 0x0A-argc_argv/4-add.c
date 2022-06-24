#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - printf.
 * @argc: arg.
 * @argv: arg.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, m, add = 0;
	char *n;

	if (argc == 1)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		n = *(argv + i);

		for (m = 0; m < strlen(n); m++)
		{
			if (!(n[m] > 47 && n[m] < 58))
			{
				printf("Error\n");
				return (1);
			}
		}

		add += atoi(argv[i]);
	}

	printf("%d\n", add);

	return (0);
}
