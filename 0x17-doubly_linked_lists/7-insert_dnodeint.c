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
	dlistint_t *temp;
	dlistint_t *current;
	unsigned int i = 0;

	if (h == NULL)
	{
		return (NULL);
	}

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;

	if (h != NULL && idx == 0)
	{
		temp->next = *h;
		*h = temp;
		return (temp);
	}

	current = *h;

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