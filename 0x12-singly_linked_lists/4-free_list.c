#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_node - add a node at the head of the list
 *@head: head element
 *@str: string
 *Return: new node
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
