#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: hash table.
 * @key: key.
 * @value: value.
 * Return: 0 or 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ne;
	char *vc;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	vc = strdup(value);
	if (vc == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = vc;
			return (1);
		}
	}

	ne = malloc(sizeof(hash_node_t));
	if (ne == NULL)
	{
		free(vc);
		return (0);
	}
	ne->key = strdup(key);
	if (ne->key == NULL)
	{
		free(ne);
		return (0);
	}
	ne->value = vc;
	ne->next = ht->array[index];
	ht->array[index] = ne;

	return (1);
}
