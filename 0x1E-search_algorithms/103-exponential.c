#include "stdio.h"
#include "stdlib.h"

int min(int a, int b);
int d_binary_search(int *array, int value, int begin, int end);

/**
 * exponential_search - exponential search
 * @size: size of the array
 * @value: value to be found
 * @array: array given
 * Return: int
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	int i = 0;

	if (!(array))
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		i = bound;
		bound *= 2;
	}

	printf("Value found between indexes [%d] and [%d]\n", i, min(size - 1, bound));

	return (d_binary_search(array, value, bound / 2, min(bound + 1, size - 1)));
}

/**
 * d_binary_search - the binary search
 * @array: array of numbers
 * @value: value of number to be found.
 * @begin: beginning of the array.
 * @end: end of the array.
 * Return: int.
*/
int d_binary_search(int *array, int value, int begin, int end)
{
	int i = 0;

	while (begin <= end)
	{
		printf("Searching in array: ");
		for (i = begin; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = (begin + end) / 2;
		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] < value)
		{
			begin = i + 1;
		}
		if (array[i] > value)
		{
			end = i - 1;
		}
	}
	return (-1);
}

/**
 * min - minimum of values
 * @a: one value
 * @b: another value
 * Return: int
*/
int min(int a, int b)
{
	if (a > b)
	{
		return (b);
	}
	return (a);
}
