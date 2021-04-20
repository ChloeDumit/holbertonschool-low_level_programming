#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "search_algos.h"
/**
 *linear_search - linear search
 *@array: array
 *@size: size
 *@value: value
 *Return: number of nodes
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;
	int i;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = 0; i < high; i++)
		printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);

		if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;


	}
	return (-1);
}
