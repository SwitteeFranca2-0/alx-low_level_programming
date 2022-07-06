#include <stdio.h>
#include <stdlib.h>

/**
 * main - main.
 * @argc: argc.
 * @argv: argv.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, m;
	char *o;

	o = (char *)main;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	 m = atoi(argv[1]);

	if (m < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < m; i++)
	{
		printf("%.2x", o[i]);
		if (i < (m - 1))
			printf(" ");
	}
	printf("\n");
	return (0);
}

