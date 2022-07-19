#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert.
 * @head: head.
 * @n: n.
 * @idx: idx
 * Return: number.s
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p;
	listint_t *h;
	unsigned int i = 0;

	h = *head;
	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = NULL;

	if (idx != 0 && head == NULL)
		return (NULL);

	if (idx != 0)
	{
		for (i = 0; i < (idx - 1) && h; i++)
			h = h->next;
	}

	if (idx == 0)
	{
		p->next = *head;
		*head = p;
	}
	else
	{
		p->next = h->next;
		h->next = p;
	}

	return (p);

}
