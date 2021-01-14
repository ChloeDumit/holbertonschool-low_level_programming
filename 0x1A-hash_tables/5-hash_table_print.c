#include "hash_tables.h"

/**
 * hash_table_print - function that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key input
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int size, index;
    hash_node_t *tmp;
    char *value;

    if (ht == NULL)
    {
        return;
    }
    size = ht->size;
    for(index = 0; index <= size; index++)
    {
        tmp = ht->array[index];
        value = hash_table_get(ht, tmp);
        printf("{'%s': '%s'}", (char *)tmp, value);
    }
}