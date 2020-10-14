#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - a pointer to newly allocated space in memory with a copy of string
 *@str: string
 *Return: s
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0, c = 0;

	while (str[c] != 0)
	{
		c++;
	}
	if (str == 0)
	{
		return (NULL);
	}
	s = (char *)malloc(c * sizeof(char));

	for (i = 0; i < c; i++)
	{
		s[i] = str[i];

	}
	return (s);
}
