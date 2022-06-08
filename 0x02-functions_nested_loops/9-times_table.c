#include "main.h"

/**
 * times_table - print out th etime table.
 * Return: no return value
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
				_putchar(',');
				_putchar(' ');
				_putchar(o / 10 + '0');
				_putchar(o % 10 + '0');
			}
			else
			{
				if (m != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(o + '0');
			}
		_putchar('\n');
		}
	}
}
