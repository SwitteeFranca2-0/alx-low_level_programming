#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - hash table print.
 * @ht: ht.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, size;
	hash_node_t *tmp;
	char *sep = "";

	if (ht != NULL)
	{
		size = ht->size;
		printf("{");
		for (i = 0; i < size; i++)
		{
			tmp = ht->array[i];
				while (tmp)
				{
					printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
					sep = ", ";
					tmp = tmp->next;
				}
		}
		printf("}\n");
	}
	else
	{
		return;
	}
}
