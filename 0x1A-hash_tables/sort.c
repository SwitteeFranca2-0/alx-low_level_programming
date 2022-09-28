#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *table;
    unsigned long int i;

    table = malloc(sizeof(shash_table_t));
    if (table == NULL)
        return (NULL);
    
    table->size = size;
    table->array = malloc(sizeof(shash_node_t *) * size);
    if ((table->array) == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        table->array[i] = NULL;

    return (table);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *node;
    unsigned long int index;


    node = malloc(sizeof(shash_node_t));
    if (node == NULL)
        return NULL

    index = key_index((const unsigned char *)key, ht->size);

    if (ht->array[index] != NULL)
    {
        
    }    
    
}