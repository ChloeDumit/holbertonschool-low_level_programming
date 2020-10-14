#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 *create_array - creates an array of chars
 *@size: size
 *@c: char
 *Return: s
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = (char *) malloc(size * sizeof(char));
	if (s == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
