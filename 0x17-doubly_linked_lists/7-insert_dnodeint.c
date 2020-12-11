#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */

 dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
 {
     dlistint_t *new;

     new = malloc(sizeof(dlistint_t));
     if (new == NULL)
     {
         return (NULL)
     }
     
 }