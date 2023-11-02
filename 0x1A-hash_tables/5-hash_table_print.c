#include "./hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: hash table.
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned long int i;
	unsigned char cf = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (cf == 1)
				printf(", ");

			nd = ht->array[i];
			while (nd != NULL)
			{
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
				if (nd != NULL)
					printf(", ");
			}
			cf = 1;
		}
	}
	printf("}\n");
}
