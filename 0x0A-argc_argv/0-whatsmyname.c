#include "main.h"
#include <stdio.h>


/**
 * main - printf.
 * @argc: arg.
 * @argv: arg.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s", argv[i]);
	printf("\n");
	return (0);
}
