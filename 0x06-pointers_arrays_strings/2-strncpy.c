#include "holberton.h"
#include <stdio.h>
/**
 *_strncpy - copies a string
 *@dest: dest
 *@src: src
 *@n: n
 */
char *_strncpy(char *dest, char *src, int n)
{
  int l, i;
  for (l = 0; dest[l] != 0; l++)
    {
    }
  for (i = 0; src[i] != '\0'; i++)
    {
    }
  for (i = 0; i < n && src[i] != '\0'; i++)
    {
      dest[l] = src[i];
    }
  for ( ; i < n; i++)
    {
      dest[l] = '\0';
    }
  return (dest);
}
