#include "main.h"

/**
 * main - Checks for lowercase.
 * Return: Returns 0.
 */
int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}

/**
 * _islower - Checkes for lowercase.
 * Return: returns 1 if lowercase and 0 if otherwise.
 *@c: the variables.
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
