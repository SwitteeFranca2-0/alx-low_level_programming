#include "main.h"

/**
 * main - calls the jack_bauer function;
 * Return: Always 0.
 */
int main(void)
{
	jack_bauer();
	return (0);
}

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
			putchar(t / 10 + '0');
			putchar(t % 10 + '0');
			putchar(':');
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			putchar('\n');
		}
	}
}
