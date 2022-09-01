#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index.
 * @h: h.
 * @idx: idx.
 * @n: n.
 * Return: dlistint_t*
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *loop;
	unsigned int i = 1;
	dlistint_t *new;

	loop = *h;

	while (loop && idx > 0)
	{
		if (i == idx)
			break;
		loop = loop->next;
		i++;

	}

	if (idx > 0 && i != idx)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (*h);
	}

	new->next = loop->next;
	(loop->next)->prev = new;
	loop->next = new;
	new->prev = loop;

	return (*h);
}
