#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - integer index.
 * @array: array.
 * @size: size.
 * @cmp: funtion pointer.
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int i, m;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		m = (*cmp)(array[i]);
		if (m != 0)
			return (i);
	}
	return (0);
}
