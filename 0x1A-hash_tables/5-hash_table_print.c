#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: argument_1
 * Return: return the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node;
	unsigned long int array_index;
	int f, f_hash;

	if (ht == NULL)
		return;
	printf("{");
	f_hash = 1;
	for (array_index = 0; array_index < ht->size; array_index++)
	{
		if ((ht->array)[array_index] == NULL)
			continue;
		if (!f_hash)
			printf(", ");
		current_node = (ht->array)[array_index];
		f = 1;
		while (current_node)
		{
			if (!f)
				printf(", ");
			printf("\'%s\': \'%s\'", current_node->key,
					current_node->value);
			f = 0;
			current_node = current_node->next;
		}
		current_node = NULL;
		f_hash = 0;
	}
	printf("}\n");
}
