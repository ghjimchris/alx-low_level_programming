#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newNode, *cnode;

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	cnode = ht->array[index];
	while (cnode != NULL)
	{
		if (strcmp(cnode->key, key) == 0)
		{
			free(cnode->value);
			cnode->value = strdup(value);
			if (cnode->value == NULL)
				return (0);
			return (1);
		}
		cnode = cnode->next;
	}
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	if (newNode->value == NULL)
		return (0);
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
