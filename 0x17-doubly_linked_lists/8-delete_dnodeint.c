#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node.
 * @head: head.
 * @index: index.
 * Return: int.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	int i = 0;
	dlistint_t *loop = *head;
	dlistint_t *nex;

	if (index != 0)
	{
		while (loop)
		{
			if (i == index - 1)
				break;
			loop = loop->next;
			i++;
		}
	}

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		loop = *head;
		*head = (*head)->next;
		free(loop);
		return (1);
	}

	nex = loop->next;
	loop->next = nex->next;
	(nex->next)->prev = loop;
	free(nex);

	return (1);
}
