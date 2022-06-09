#include "main.h"

/**
 * _isdigit - checks wether is digit or not.
 * @c: a parameter.
 * Return: 1 or 0;
 */
int _isdigit(int c)
{
	int m;

	for (m = 48; m < 58; m++)
	{
		if (c == m)
			return (1);
	}
	return (0);
}
