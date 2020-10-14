#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **array;
	if (width <= 0)
	{
		return (NULL);
	}
	if (width <= 0)
	{
		return (NULL);
	}
	array = malloc((height + 1)* sizeof(int *));
	if (array == 0)
	{
		return (NULL);
	}

	for(i = 0; i < height; i++)
	{
		array[i] = malloc((width + 1) * sizeof(int));
	}
	return (array);
}
