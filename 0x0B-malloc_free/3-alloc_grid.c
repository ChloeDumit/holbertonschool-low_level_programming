#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - returns a 2d aray
 *@width: width
 *@height: height
 *Return: array
*/
int **alloc_grid(int width, int height)
{
	int i, j;
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

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			while (i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;
return (array);
}
