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
	if (height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == 0)
	{
		return (NULL);
	}

	for(i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
	}
	return (array);
}
