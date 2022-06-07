#include "main.h"

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

