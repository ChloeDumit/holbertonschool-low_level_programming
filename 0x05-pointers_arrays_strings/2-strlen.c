#include "holberton.h"
#include <stdio.h>
/**
 *_strlen - return lenght of string
 *@s: string
 *Return - lenght of string
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
