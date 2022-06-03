#include <stdio.h>

/**
 * main - print single digit base 10 numbers.
 *
 * Return: always 0.
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n == 9)
		{
			continue;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
