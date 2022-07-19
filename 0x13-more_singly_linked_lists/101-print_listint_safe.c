size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;

	while (head)
	{
		printf("[%p] %d", &head, head->n);
		head = head->next;
		i++;
	}

	return (i);
}