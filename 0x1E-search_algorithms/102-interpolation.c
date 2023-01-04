#include "stdio.h"
#include "stdlib.h"

/**
 * interpolation_search - interpolation search
 * @size: size of the array.
 * @arr: array in question
 * @key: value to be found.
 * Return: int
*/
int interpolation_search(int *arr, size_t size, int key)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (!(arr))
		return (-1);

	while ((arr[high] != arr[low]) && (key >= arr[low]) && (key <= arr[high]))
	{
		pos = low + (((double)(high - low) / (arr[high] - arr[low])) *
		(key - arr[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, arr[pos]);
		if (arr[pos] < key)
			low = pos + 1;
		else if (key < arr[pos])
			high = pos - 1;
		else
			return (pos);
	}

	if (key == arr[low])
		return (low);
	else
		return (-1);
}
