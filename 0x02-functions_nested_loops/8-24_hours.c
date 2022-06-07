#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack bauer.
 * Return: no return value
 */
void jack_bauer(void)
{
	int t;
	int n;

	for (t = 0; t <= 23; t++)
	{
		for (n = 0; n <= 59; n++)
		{
			_putchar(t / 10 + '0');
			_putchar(t % 10 + '0');
			_putchar(':');
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar('\n');
		}
	}
}
