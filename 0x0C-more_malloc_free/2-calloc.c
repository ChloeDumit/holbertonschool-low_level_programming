#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *new;
int i;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	new = malloc(nmemb * size);
		     if (new == 0)
		     {
			     return (NULL);
		     }
		     i = 0;
		     for (i = (i - 1); i >= 0; i--)
		     {
			     new[i] = '\0';
			     
}
		     return(new);
}
