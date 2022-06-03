#include <stdio.h>

/**
 * main - print single digit base 10 numbers.
 *
 * Return: always 0.
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n += 1;
	}
	putchar('\n');

	return (0);
}
