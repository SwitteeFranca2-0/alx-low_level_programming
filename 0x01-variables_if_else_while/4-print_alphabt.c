#include <stdio.h>

/**
 * main - print the letter o fthe alphabet in lower case without e and q.
 *
 * Return: always 0.
 */
int main(void)
{
	char n;

	n = 97;
	while (n < 123)
	{
		if ((n == 101) || (n == 113))
		{
			n += 1;
		}
		else
		{
			putchar(n);
			n += 1;
		}
	}
	putchar('\n');
	return (0);
}
