#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - list int.
 * @h: h
 * Return: number.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
