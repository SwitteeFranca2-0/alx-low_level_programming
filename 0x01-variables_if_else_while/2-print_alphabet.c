#include <stdio.h>

/**
 * main - print the letter o fthe alphabet in lower case.
 *
 * Return: always 0.
 */
int main(void)
{
	char n;

	n = 97;
	while (n < 123)
	{
		putchar(n);
		n += 1;
	}
	putchar('\n');
	return (0);
}
