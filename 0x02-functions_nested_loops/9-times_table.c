#include "main.h"

/**
 * main - calling in the times_table function.
 * Return: Always 0.
 */
int main(void)
{
	times_table();
	return (0);
}

/**
 * times_table - prints the 9 times table
 * Return: no return value.
 */
void times_table(void)
{
	int n;
	int m;
	int o;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			o = m * n;
			if (o > 9)
			{
				putchar(o / 10 + '0');
				putchar(o % 10 + '0');
			}
			else
			{
				putchar(o + '0');
			}
			if (m == 9)
			{
				continue;
			}
			else
			{
				putchar(',');
			}
		}
		putchar('\n');
	}
}
