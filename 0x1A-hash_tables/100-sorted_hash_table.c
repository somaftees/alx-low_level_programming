#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - create a sorted hash table.
 * @size: size.
 * Return: ht or NULL.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - add an element to a sorted hash table.
 * @ht: hash table.
 * @key: key.
 * @value: The value associated with key.
 * Return: 0 or -1.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *ne, *tmp;
	char *vc;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	vc = strdup(value);
	if (vc == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = vc;
			return (1);
		}
		tmp = tmp->snext;
	}

	ne = malloc(sizeof(shash_node_t));
	if (ne == NULL)
	{
		free(vc);
		return (0);
	}
	ne->key = strdup(key);
	if (ne->key == NULL)
	{
		free(vc);
		free(ne);
		return (0);
	}
	ne->value = vc;
	ne->next = ht->array[i];
	ht->array[i] = ne;

	if (ht->shead == NULL)
	{
		ne->sprev = NULL;
		ne->snext = NULL;
		ht->shead = ne;
		ht->stail = ne;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		ne->sprev = NULL;
		ne->snext = ht->shead;
		ht->shead->sprev = ne;
		ht->shead = ne;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		ne->sprev = tmp;
		ne->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = ne;
		else
			tmp->snext->sprev = ne;
		tmp->snext = ne;
	}

	return (1);
}

/**
 * shash_table_get - get a sorted hash table.
 * @ht: hash table.
 * @key: key.
 * Return: nd or NULL.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *nd;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	nd = ht->shead;
	while (nd != NULL && strcmp(nd->key, key) != 0)
		nd = nd->snext;

	return ((nd == NULL) ? NULL : nd->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 * Return: void.
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
		return;

	nd = ht->shead;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->snext;
		if (nd != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table.
 * @ht: hash table.
 * Return: void.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
		return;

	nd = ht->stail;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->sprev;
		if (nd != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete sorted hash table.
 * @ht: hash table.
 * Return: void.
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *h = ht;
	shash_node_t *nd, *tmp;

	if (ht == NULL)
		return;

	nd = ht->shead;
	while (nd)
	{
		tmp = nd->snext;
		free(nd->key);
		free(nd->value);
		free(nd);
		nd = tmp;
	}

	free(h->array);
	free(h);
}
