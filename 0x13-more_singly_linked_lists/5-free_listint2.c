#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free list.
 * @head: head.
 * Return: none.
 */
void free_listint2(listint_t **head)
{
	listint_t *p, *n;

	if (*head != NULL)
	{
		n = *head;
		while (n)
		{
			p = n->next;
			free(n);
			n = p;
		}
	}
	*head = NULL;

}
