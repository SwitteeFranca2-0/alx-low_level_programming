#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - array iterator.
 * @array: array.
 * @size: size of array.
 * @action: function pointer.
 * Return: none.
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array && action)

	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
