#include "hash_tables.h"

/**
 * hash_table_create - creates a hash_table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table,
 *         or NULL if something went wrong.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
  hash_table_t *ht_created;
  unsigned long int i;

  /* allocate memory for hash table */
  ht_created = malloc(sizeof(hash_table_t));

  if (ht_created == NULL)
    return (NULL);

  /* allocate memory for array of pointers */
  ht_created->array = malloc(sizeof(hash_node_t *) * size);
  if (ht_created->array == NULL)
    {
      free(ht_created);
      return (NULL);
    }

  for (i = 0; i < size; i++)
    ht_created->array[i] = NULL;
  ht_created->size = size;
  return (ht_created);
}
