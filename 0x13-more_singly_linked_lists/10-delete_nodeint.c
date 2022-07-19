#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - node.
 * @head: head.
 * @index: index.
 * Return: no.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *m;
	int h, i;

	m = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && m; i++)
		{
			m = m->next;
		}
	}

	if (m == NULL || (m->next == NULL && index != 0))
	{
		return (-1);
	}

	p = m->next;

	if (index != 0)
	{
		m->next = p->next;
		free(p);
	}
	else
	{
		free(m);
		*head = p;
	}

	return (1);
}
