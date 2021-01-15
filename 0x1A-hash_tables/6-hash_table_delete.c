#include "hash_tables.h"
/**
 * hash_table_delete - function that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key input
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *tmp, *freeable;

if (!ht)
return;

for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
for (tmp = ht->array[i]; tmp;)
{
freeable = tmp;
tmp = tmp->next;
free(freeable->key);
free(freeable->value);
free(freeable);
freeable = NULL;
}
}
}
free(ht->array);
free(ht);
ht = NULL;
}