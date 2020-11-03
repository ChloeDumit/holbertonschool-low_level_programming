#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_listint2 - free list
 *@head: head element
 */
void free_listint2(listint_t **head)
{
	listint_t *new = NULL;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		new = *head;
		*head = (**head).next;
		free(new);
	}
	head = NULL;
}
