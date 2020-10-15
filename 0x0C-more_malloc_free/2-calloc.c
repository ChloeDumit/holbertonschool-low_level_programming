#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *new;
	int i;
	i = 0;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	new = malloc(nmemb * sizeof(size));
		     if (new == 0)
		     {
			     return (NULL);
		     }
		     for (i = (i - 1); i >= 0; i--)
		     {
			     new[i] = 0;
		     }
		     return(new);
}
