#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * Return: no return value.
 */
void print_alphabet(void)
{
	char n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
