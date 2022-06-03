#include <stdio.h>

/**
 * main - print the letter o fthe alphabet in lower case in a reverse order.
 *
 * Return: always 0.
 */
int main(void)
{
	char n;

	n = 122;
	while (n >= 97)
	{
		putchar(n);
		n -= 1;
	}
	putchar('\n');
	return (0);
}
