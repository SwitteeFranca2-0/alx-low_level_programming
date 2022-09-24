#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - hash table set
 * @ht: ht.
 * @key: key.
 * @value: value
 * Return: int.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *new;

	if (ht ==  NULL || key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		(ht->array[index])->key = strdup(key);
		(ht->array[index])->value = strdup(value);
		return (1);
	}
	node = ht->array[index];
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
