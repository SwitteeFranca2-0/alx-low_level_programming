#include "main.h"

/**
 * main - Identifies whetheer or not the value is alpha.
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	putchar(r + '0');
	r = _isalpha('o');
	putchar(r + '0');
	r = _isalpha(108);
	putchar(r + '0');
	r = _isalpha(';');
	putchar(r + '0');
	putchar('\n');
	return (0);
}

/**
 * _isalpha - check for alphabets.
 * @c: variable.
 * Return: returns 1 if alpha and 0 if otherwise.
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || (c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

