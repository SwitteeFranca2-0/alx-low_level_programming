#include "main.h"

/**
 * main - print alphabet ten times.
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10.c - print alphabets ten times.
 * Return: no return value.
 */
void print_alphabet_x10(void)
{
	int n;
	int m;

	for (n = 1; n <= 10; n++)
	{
		for (m = 97; m <= 122; m++)
		{
			putchar(m);
		}
		putchar('\n');
	}
}
