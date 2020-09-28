#include "holberton.h"
/**
 *
 *
 *
 */
void rev_string(char *s)
{
  int i, j, k;
  char rev[150];
  for (i = 0; s[i] != '\0'; i++)
    {
      k = i;
    }
  for (j = 0; j <= i - 1; j++)
    {
      rev[j] = s[k];
      k--;
    }
  return (rev);
}
