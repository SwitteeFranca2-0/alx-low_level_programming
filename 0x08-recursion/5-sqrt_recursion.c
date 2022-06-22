#include "main.h"

int _sqrt_recur(int p, int q);

/**
 * _sqrt_recursion - sqrt.
 * @m: arg.
 * Return: function.
 */


int _sqrt_recursion(int m)
{
	return (_sqrt_recur(m, 1));
}

/**
 * _sqrt_recur - sqrt.
 * @m: arg.
 * @q: arg.
 * Return: integr.
 */

int _sqrt_recur(int m, int q)
{
	if (q > (m / 2))
		return (-1);

	if (m == (q * q))
		return (q);
	q++;
	_sqrt_recur(m, q);
}




