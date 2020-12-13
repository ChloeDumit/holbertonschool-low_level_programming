#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_dlistint - return number of elements
 *@h: head element
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *temp = NULL;
unsigned int i;

i = 0;
temp = h;

while (temp)
{
printf("%d\n", temp->n);
temp = temp->next;
i++;
}
return (i);
}
