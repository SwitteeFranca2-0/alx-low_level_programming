#include "main.h"

/**
 * swap_int - swap int.
 * @a: parameter.
 * @b: para,eters.
 * Return: no return value
 */
void swap_int(int *a, int *b)
{
	int o;

	o = *a;

	*a = *b;
	*b = o;
}
