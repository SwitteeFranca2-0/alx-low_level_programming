#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add node to end.
 * @head: head.
 * @n: n.
 * Return: head.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *p;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	p = *head;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (p->next)
			p = p->next;
		p->next = new;
	}

	return (*head);
}




