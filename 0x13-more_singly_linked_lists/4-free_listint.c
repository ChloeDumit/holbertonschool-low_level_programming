#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_listint - free list
 *@head: head element
 */
void free_listint(listint_t *head)
{
	listint_t *new = NULL;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
}
}
