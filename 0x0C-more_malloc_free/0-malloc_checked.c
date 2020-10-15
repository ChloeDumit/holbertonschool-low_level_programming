#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - allocates memory using malloc
 *@b: b
 *Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	int *new;

	if (b == 0)
	{
		return (NULL);
	}
	new = malloc(b);
	if (new == 0)
	{
		exit(98);
	}
	return (new);
}
