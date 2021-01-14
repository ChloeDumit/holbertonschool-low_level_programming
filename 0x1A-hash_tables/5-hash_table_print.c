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
    unsigned int i;
    if (ht == NULL)
    {
        return;
    }
    
    printf("{");
    for(i = 0; i < ht->size; i++)
    {

        if(ht->array[i] != NULL)
            printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
            if(ht->array[i]->next != NULL)
            {
                printf(", ");
            }
            else
            {
                printf("}\n");
            }

    }

}