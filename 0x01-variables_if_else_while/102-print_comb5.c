#include <stdio.h>

/**
 * main - print all combination sof two digits seperated by a space.
 *
 * Return: always 0.
 */
int main(void)
{
	int m;
	int n;

	for (m = 0; m < 99; m++)
	{
		for (n = m + 1 ; n < 100; n++)
		{	putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar(' ');
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			if ((m == 98) && (n == 99))
			{
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
