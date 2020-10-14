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

	if (str == 0)
        {
                return (NULL);
        }
	while (str[c] != 0)
	{
		c++;
	}
	
	s = (char *)malloc(c + 1 * sizeof(char));
	if (s == 0)
	{
		return (NULL);
	}
	for (i = 0; i < c; i++)
	{
		s[i] = str[i];

	}
return (s);
	}
