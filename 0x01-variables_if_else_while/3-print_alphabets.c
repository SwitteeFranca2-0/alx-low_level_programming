#include <stdio.h>

/**
 * main - print the letter o fthe alphabet in lower case and upper case.
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
	n = 65;
	while (n < 91)
	{
		putchar(n);
		n += 1;
	}
	putchar('\n');
	return (0);
}
