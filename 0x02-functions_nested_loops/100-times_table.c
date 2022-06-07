#include "main.h"

/**
 * print_times_table - print times table.
 * @n: variable
 * Return: no return value
 */

void print_times_table(int n)
{
	int m, o, p;

	if ((n >= 0) && (n < 15))
	{
		for (m = 0; m <= n ; m++)
		{
			for (o = 0; o <= n; o++)
			{
				p = m * o;
				if ((p > 9) && (p <= 99))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(p / 10 + '0');
					_putchar(p % 10 + '0');
				}
				else if (p > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((p / 100) + '0');
					_putchar((p / 10) % 10 + '0');
					_putchar(p % 10 + '0');
				}
				else
				{
					if (o != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(p + '0');
				}
			}
			_putchar('\n');
		}
	}
}
