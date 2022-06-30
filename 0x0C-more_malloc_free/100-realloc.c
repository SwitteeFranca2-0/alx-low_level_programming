#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - realloc.
 * @ptr: pointer.
 * @old_size: initial.
 * @new_size: final
 * Return: void.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;


	p = malloc(new_size);

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (p == NULL)
		return (NULL);

	for (i = 0; i < old_size && i <	new_size; i++)
		p[i] = ((char *) ptr)[i];
	free(ptr);
	return (p);
}














