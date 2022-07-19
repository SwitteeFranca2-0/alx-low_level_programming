#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * pop_listint - pop list.
 *
 * @head: head
 * Return: p.
 */
int pop_listint(listint_t **head)
{
	int p;
	listint_t *h;

	if (*head == NULL)
	{
		return (0);
	}
	h = *head;
	p = (h)->n;
	*head = (*head)->next;
	free(h);
	return (p);
}
