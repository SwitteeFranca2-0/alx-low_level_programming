#include "main.h"

/**
 * _pow_recursion - pow recurs.
 * @x: x.
 * @y: y.
 * Return: num.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
