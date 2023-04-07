#include "hash_tables.h"
/**
 * hash_table_print - function that prints hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int l, j = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (l = 0; l < ht->size; l++)
	{
		if (ht->array[l] != NULL)
		{
			if (j == 1)
				printf(", ");
			node = ht->array[l];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			j = 1;
		}
	}
	printf("}\n");
}
