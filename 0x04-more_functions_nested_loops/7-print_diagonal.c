#include "main.h"
#include <stdio.h>

/**
 * main - atisfy a gven.
 * Return: whatever it returns, more 0.
 */
int main(void)
{
	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(10);
	print_diagonal(-4);
	return (0);
}

/**
 * print_diagonal - print diagonal
 * @n: parameter
 * Return: no return value
 */
void print_diagonal(int n)
{
	int m;

	m = 1;

	if (n > 0)
	{
		for (;m <= n; m++)
		{
			for (;m > 1; m--)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
	putchar('\n');	
}
