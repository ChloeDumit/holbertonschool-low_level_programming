#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *reverse_listint - delete node at index given.
 *@head: head
 *Return: Always 0.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_p = list, *fast_p = list;

	while (slow_p && fast_p && fast_p->next)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
		if (slow_p == fast_p)
		{
			return (1);
		}
	}

	return (0);
}
