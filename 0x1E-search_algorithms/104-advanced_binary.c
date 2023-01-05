#include "stdio.h"
#include "stdlib.h"

int search(int *array, size_t size, int value, size_t b, size_t e);


/**
 * advanced_binary - binary searching a sorted array
 * @array: array to be transversed
 * @size: size of the array
 * @value: value to be searched for.
 * Return: index of the found value
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t b = 0,  e = size - 1, c = 0, r;

	if (!(array))
		return (-1);

	c = (b + e) / 2;

	printf("Searching in array: ");
	for (r = 0;  r < size - 1; r++)
		printf("%d, ", array[r]);
	printf("%d\n", array[r]);

	if (array[c] == value)
	{
		if (array[c - 1] == value)
			return (search(array, size, value, b, c));
		return (c);
	}
	else if (array[c] < value)
	{
		b = c + 1;
		return (search(array, size, value, b, e));
	}
	else
	{
		e = c - 1;
		return (search(array, size, value, b, e));
	}

	return (-1);
}


/**
 * search - binary searching a sorted array
 * @array: array to be transversed
 * @size: size of the array
 * @value: value to be searched for.
 * @b: beginning index
 * @e: ending index
 * Return: index of the found value
*/
int search(int *array, size_t size, int value, size_t b, size_t e)
{

	size_t c = 0;

	if (b <= e)
	{
		printf("Searching in array: ");
		for (c = b;  c < e; c++)
			printf("%d, ", array[c]);
		printf("%d\n", array[c]);

		c = (b + e) / 2;
		if (array[c] == value)
		{
			return (c);
		}
		else if (array[c] < value)
		{
			b = c + 1;
			return (search(array, size, value, b, e));
		}
		else
		{
			e = c - 1;
			return (search(array, size, value, b, e));
		}
	}
	return (-1);
}
