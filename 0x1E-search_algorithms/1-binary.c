#include "stdio.h"
#include "stdlib.h"
#include "search_algos.h"

/**
 * binary_search - binary searching a sorted array
 * @array: array to be transversed
 * @size: size of the array
 * @value: value to be searched for.
 * Return: index of the found value
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0,  b = size - 1, c = 0, r;

	if (!(array))
		return (-1);
	while (i <= b)
	{
		c = (b + i) / 2;
		printf("Searching in array: ");
		for (r = i; r < b + 1; r++)
		{
			printf("%d", array[r]);
			if (r != b)
				printf(", ");
		}
		printf("\n");
		if (array[c] < value)
		{
			i = c + 1;
		}
		else if (array[c] > value)
		{
			b = c - 1;
		}
		else
		{
			return (c);
		}
	}
	return (-1);
}
