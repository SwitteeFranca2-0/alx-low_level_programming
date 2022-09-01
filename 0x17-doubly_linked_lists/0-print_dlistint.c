#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_dlistint - print values.
 * @h: h.
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;


	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
