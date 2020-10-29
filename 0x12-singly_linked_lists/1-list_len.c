#include <stdio.h>
#include "lists.h"
/**
 *list_len - return number of elements
 *@h: head element
 *Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int i;
	const list_t *temp;
	i = 0;
	for (temp = h; temp != NULL; temp = temp->next)
	{
		i++;
	}
	return(i);
}
