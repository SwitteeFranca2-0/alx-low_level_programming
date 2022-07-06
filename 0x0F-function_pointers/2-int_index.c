#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - integer index.
 * @array: array.
 * @size: size.
 * @cmp: funtion pointer.
 * Return: 0.
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int i, m;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			m = (*cmp)(array[i]);
			if (m != 0)
				return (i);
		}
	}
	return (0);
}
