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
	int i = 0;

	h = *head;
	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = NULL;

	if (head == NULL)
	{
		*head = p;
	}
	else
	{
		while (h)
		{
			i++;
			if (i == idx)
			{
				p->next = (h)->next;
				(h)->next = p;
				return (*head);
			}
			h = (h)->next;
		}
	}

	return (NULL);

}
