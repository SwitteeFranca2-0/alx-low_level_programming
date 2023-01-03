#include "stdio.h"
#include "stdlib.h"
#include "stddef.h"
#include "search_algos.h"

/**
 * linear_search - a linear search of an array of elements to find a value
 * @array: the given array
 * @size: the size of the array
 * @value: the value to be searched for.
 * Return: int
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!(array))
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
