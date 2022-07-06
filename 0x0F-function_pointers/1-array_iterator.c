#include "function_pointers.h"

/**
 * array_iterator - array iterator.
 * @array: array.
 * @size: size of array.
 * @action: function pointer.
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}