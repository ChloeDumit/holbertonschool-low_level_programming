#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 *create_array - creates an array of chars
 *@size: size
 *@c: char
 *Returns: null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc ((size + 1) * sizeof(char));
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
