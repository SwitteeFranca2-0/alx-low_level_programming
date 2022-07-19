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

	if (*head == NULL)
	{
		return (0);
	}
	p = (*head)->n;
	*head = (*head)->next;
	return (p);
}
