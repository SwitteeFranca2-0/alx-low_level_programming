#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_delete - hash tanbe
 * @ht: ht
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i, size;
	hash_node_t *tmp, *tmp2;

	if (ht == NULL)
		return;
	size = ht->size;
	for (i = 0; i < size; i++)
	{
		tmp = ht->array[i];
		while ((tmp2 = tmp) != NULL)
		{
			tmp = tmp->next;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
		}
		free(tmp);
	}

	free(ht->array);
	free(ht);

}
