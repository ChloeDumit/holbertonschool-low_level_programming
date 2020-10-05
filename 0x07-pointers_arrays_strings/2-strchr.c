#include "holberton.h"
#include <stdio.h>
/**
 *
 **/
char *_strchr(char *s, char c)
{
	do
	{
		if (*s == c)
			return(s);
	}
	while(*s++);
	return(NULL);
	}
