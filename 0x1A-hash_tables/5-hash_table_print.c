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
    unsigned int i, j = 0;
    hash_node_t *tmp;

    if (ht == NULL)
    {
        return;
    }
    while (ht->array[j] == NULL)
    {
        j++;
    }

    printf("{");

    for(i = 0; i <= ht->size; i++)
    {       
            if(ht->array[i] != NULL)
            {
                tmp = ht->array[i];
                if(i == j)
                {
                    printf("'%s': '%s'", tmp->key, tmp->value);
                    tmp = tmp->next;
                     
                }
                else
                    printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);
            }
        
    }

    printf("}\n");
}