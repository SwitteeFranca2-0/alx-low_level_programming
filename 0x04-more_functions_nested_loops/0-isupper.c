#include "main.h"

/**
 * _isupper - check if uppercase or not..
 * @c:  parameter.
 * Return: 1 or 0.
 */
int _isupper(int c)
{
	int n;

	for (n = 65; n < 91; n++)
	{
		if (c == n)
		{
			return (1);
		}
	}
	return (0);
}
