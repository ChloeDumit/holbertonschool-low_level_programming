#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_node_end - add a node at the end of the list
 *@head:  head element
 *@str: string
 *Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	unsigned int counter;
	list_t *temp;

	if (new == NULL)
		return (NULL);
	counter = 0;

	while (str[counter] != '\0')
	{
		counter++;
	}

	new->len = counter;
	new->str = strdup(str);

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->next = NULL;
		return (*head);
}
