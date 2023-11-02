#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: size.
 * Return: NULL or h.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;
	unsigned long int i;

	h = malloc(sizeof(hash_table_t));
	if (h == NULL)
		return (NULL);

	h->size = size;
	h->array = malloc(sizeof(hash_node_t *) * size);
	if (h->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		h->array[i] = NULL;

	return (h);
}
