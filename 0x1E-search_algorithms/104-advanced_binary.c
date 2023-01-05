#include "stdio.h"
#include "stdlib.h"

int advanced_binary(int *array, size_t size, int value)
{
	size_t i = 0,  b = size - 1, c = 0, r, pos;
	int *p = array;

	if (!(array))
		return (-1);

	c = (b + i) / 2;

	if (array[c] == value)
	{
		return (c);
	}
	else if (array[c] < value)
	{
		i = c + 1;
	}
}

int 