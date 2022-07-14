#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add node to the end.
 * @head: head.
 * @str: str.
 * Return: list_t*
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *new;
	list_t *p;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[i])
		i++;

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	p = *head;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = new;
	}
	return (*head);
}
