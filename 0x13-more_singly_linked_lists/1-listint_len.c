#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *listint_len - returns number of elements
 *@h: header
 *Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp;

	for (temp = h; temp != NULL; temp = temp->next)
	{
		count++;
	}
	return (count);

}
