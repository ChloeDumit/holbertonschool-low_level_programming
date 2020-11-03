#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 *@head: head
 *Return: sum of all the data
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *current;
	unsigned int i = 0;
	if (head == NULL)
	{
		return (NULL);
	}

	temp = malloc(sizeof(listint_t));
	temp->n = n;

	if (head != NULL && idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}

	current = *head;

	while (current != NULL)
	{
		if (i + 1 == idx)
		{
			temp->next = current->next;
			current->next = temp;
			return (temp);
		}
		current = current->next;
		i++;
	}
	free(temp);
	return (NULL);
}
