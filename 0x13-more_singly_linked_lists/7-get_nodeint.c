#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Get the nodeint at index object
 * @head: head.
 * @index: index.
 * Return: value.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int h = 0;

	p = head;
	while (p)
	{
		if (h == index)
			return (p);
		h++;
		p = p->next;
	}
	return (0);
}
