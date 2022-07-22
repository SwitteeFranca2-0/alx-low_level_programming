#include <stdio.h>
#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		exit(98);

	
	
	while (head)
	{
		printf("[%p] %d", &head, head->n);
		head = head->next;
		i++;
	}

	return (i);
}