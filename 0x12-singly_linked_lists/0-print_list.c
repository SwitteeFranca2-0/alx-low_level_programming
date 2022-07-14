#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - print list.
 * @h: pointer to list.
 * Return: value.
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", (*h).len, (*h).str);
		}
		h = h->next;
	}
	return (i);
}
