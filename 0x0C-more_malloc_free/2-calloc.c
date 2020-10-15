#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *new = NULL;
unsigned int i;
	i = 0;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	new = malloc(nmemb * size);
		     if (new == 0)
		     {
			     return (NULL);
		     }
		     while (i < nmemb * size)
		     {
			     new[i] = '\0';
			     i++;
}
		     return(new);
}
