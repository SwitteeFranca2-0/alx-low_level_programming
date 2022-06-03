#include <stdio.h>

/**
 * main - print all possible combinations of 3 digit numbers.
 *
 * Return: always 0.
 */
int main(void)
{
	int m;
	int n;
	int o;

	for (m = 0; m < 8; m++)
	{
		for (n = m + 1; n < 9; n++)
		{
			for (o = n + 1; o < 10; o++)
			{
				putchar(m + '0');
				putchar(n + '0');
				putchar(o + '0');
				if ((m == 7) && (n == 8) && (o == 9))
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
	}
	putchar('\n');
	return (0);
}
