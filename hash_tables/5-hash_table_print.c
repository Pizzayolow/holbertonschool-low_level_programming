#include "hash_tables.h"

/**
 * hash_table_print - Ajoute ou met à jour un élément
 * @ht: pointeur vers la table de hachage
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	char *coma = "";

	if (ht == NULL)
	{
		return;
	}

	if (ht->array == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			printf("%s'%s': '%s'", coma, ht->array[i]->key, ht->array[i]->value);
			coma = ", ";
		}
	}
	printf("}\n");
}
