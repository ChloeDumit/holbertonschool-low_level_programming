#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *delete, *temp;
	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	temp = *head;
	while (temp != NULL)
	{
		if (counter + 1 == index)
		{
		delete = temp->next;
		temp->next = delete->next;
		free (delete);
		return (1);
		}
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	temp = temp->next;
	counter++;
}
return (-1);
}
