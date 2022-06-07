#include "main.h"

/**
 * main - prints the alphabet.
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints the alphabet
 * Return: no return value.
 */
void print_alphabet(void)
{
	char n;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
