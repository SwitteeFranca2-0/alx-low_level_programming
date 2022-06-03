
#include <stdio.h>

/**
 * main - print the single characters of hexadecimal numbers in lower case.
 *
 * Return: always 0.
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar((n) + '0');
		n += 1;
	}
	n = 97;
	while (n <= 102)
	{
		putchar(n);
		n += 1;
	}
	putchar('\n');
	return (0);
}
