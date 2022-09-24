 #include <stdlib.h>
 #include <stdio.h>
 #include "hash_tables.h"

/**
 * key_index - return key index
 * @key: key.
 * @size: size of the table.
 * Return: returns the value of key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
