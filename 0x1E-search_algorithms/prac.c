#include "stdio.h"
#include "stdlib.h"

int advanced_binary(int *array, size_t size, int value)
{
	size_t i = 0,  b = size - 1, c = 0, r, pos;

	if (!(array))
		return (-1);
	while (i <= b)
	{
		c = (b + i) / 2;
		printf("Searching in array: ");
		for (r = i; r < b ; r++)
			printf("%d, ", array[r]);
		printf("%d", array[r]);
		printf("\n");
		if (array[c] == value)
		{

			for (pos = 0; pos < c; pos++)
			{
				if (array[pos] == value)
					c = pos;
			}
			return (c);
		}
		else if (array[c] < value)
		{
			i = c + 1;
		}
		else
		{
			b = c - 1;
		}
	}
	return (-1);
		
}