#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - calculate arguments.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int (*operator)(int, int);
	int calc, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	calc = operator(num1, num2);
	printf("%d\n", calc);
	return (0);

}

