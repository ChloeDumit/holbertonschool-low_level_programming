#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - execute each element of array
 *@array: array given
 *@size: size of array
 *@action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || size <= 0 || array == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
