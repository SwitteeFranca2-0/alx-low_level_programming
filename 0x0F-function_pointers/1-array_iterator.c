#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - array iterator.
 * @array: array.
 * @size: size of array.
 * @action: function pointer.
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	i = 0;
	if (array != NULL && size > 0 && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
