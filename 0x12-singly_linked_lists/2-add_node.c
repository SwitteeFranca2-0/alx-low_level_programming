#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_node - add node.
 * @head: head.
 * @str: str.
 * Return: head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}
	(new)->str = strdup(str);
	(new)->next = *head;
	(new)->len = i;
	*head = new;

	return (*head);
}
